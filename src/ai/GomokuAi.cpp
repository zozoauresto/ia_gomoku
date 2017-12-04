//
// Created by 53269 on 28/11/2017.
//

#include <vector>
#include <tuple>
#include "../../include/ai/GomokuAi.hpp"

//TODO: gomoSend est à changer (correspond à la réponse attendu par le programme)
int GomokuAi::gomoStart(unsigned int size) {
    gomoSendStart(true);

    std::vector<BoardData> line;
    BoardData data;
    int i = 0;
    data.play = NONE;
    data.value = 0;
    while (i < size)
    {
        line.push_back(data);
        i++;
    }
    i = 0;
    while (i < size)
    {
        board.push_back(line);
        i++;
    }
    return 0;
}

int GomokuAi::gomoTurn(unsigned int ennemyX, unsigned int ennemyY) {
    board.at(ennemyX).at(ennemyY).play = OPPONENT;
    gomoSendTurn(1, 1);
    return 0;
}

int GomokuAi::gomoBegin() {
    gomoSendTurn(1, 1);
    return 0;
}

int GomokuAi::gomoInfo(const std::string &infoKey) {
    return 0;
}

int GomokuAi::gomoEnd() {
    return 0;
}

int GomokuAi::gomoAbout() {
    gomoSendAbout();
    return 0;
}

int GomokuAi::gomoBoard(std::vector<std::string> &newBoard) {
    gomoSendTurn(1, 1);
    return 0;
}

GomokuAi::GomokuAi() {
    about = R"(name="gomukobrain", version="1.0", author="Devia", country="FR")";
}

void GomokuAi::setScore(int x, int y)
{
    int i = 0;
    int j;
    while (i < 19)
    {
        j = 0;
        while (j < 19)
        {
            if (j < board.size() && i < board.size() && j >= 0 && i >= 0 && board.at(i).at(j).play == NONE)
                setSquare(i, j);
            else if (j < board.size() && i < board.size() && j >= 0 && i >= 0 && (board.at(i).at(j).play == OPPONENT || board.at(i).at(j).play == PLAYER))
                board.at(i).at(j).value = 0;
            j++;
        }
        i++;
    }
}

void GomokuAi::setSquare(int i, int j) {
    int k;
    int len;
    int values = 0;
    int r;
    int l;
    bool right;
    bool left;

    std::cout << "i : " << i << " j : " << j << std::endl;
    k = 0;
    while (k < 4)
    {
        r = 0;
        l = 0;
        len = 1;
        right = true;
        left = true;
        while (len < 5)
        {
            switch (k)
            {
                case 0:
                    if (right && j + len >= board.size())
                    {
                        r = len - 1;
                        right = false;
                    }
                    if (right && board.at((unsigned int)i).at((unsigned int)j + len).play == OPPONENT)
                    {
                        r = len - 1;
                        right = false;
                    }
                    if (left && j - len < 0)
                    {
                        l = len - 1;
                        left = false;
                    }
                    if (left && board.at((unsigned int)i).at((unsigned int)j - len).play == OPPONENT)
                    {
                        l = len - 1;
                        left = false;
                    }
                    break;
                case 1:
                    if (right && (i + len >= board.size() || j + len >= board.size()))
                    {
                        r = len - 1;
                        right = false;
                    }
                    if (right && board.at((unsigned int)i + len).at((unsigned int)j + len).play == OPPONENT)
                    {
                        r = len - 1;
                        right = false;
                    }
                    if (left && (i - len < 0 || j - len < 0))
                    {
                        l = len - 1;
                        left = false;
                    }
                    if (left && board.at((unsigned int)i - len).at((unsigned int)j - len).play == OPPONENT)
                    {
                        l = len - 1;
                        left = false;
                    }
                    break;
                case 2:
                    if (right && i + len >= board.size())
                    {
                        r = len - 1;
                        right = false;
                    }
                    if (right && board.at((unsigned int)i + len).at((unsigned int)j).play == OPPONENT)
                    {
                        r = len - 1;
                        right = false;
                    }
                    if (left && i - len < 0)
                    {
                        l = len - 1;
                        left = false;
                    }
                    if (left && board.at((unsigned int)i - len).at((unsigned int)j).play == OPPONENT)
                    {
                        l = len - 1;
                        left = false;
                    }
                    break;
                case 3:
                    if (right && (i - len < 0 || j + len >= board.size()))
                    {
                        r = len - 1;
                        right = false;
                    }
                    if (right && board.at((unsigned int)i - len).at((unsigned int)j + len).play == OPPONENT)
                    {
                        r = len - 1;
                        right = false;
                    }
                    if (left && (i + len >= board.size() || j - len < 0))
                    {
                        l = len - 1;
                        left = false;
                    }
                    if (left && board.at((unsigned int)i + len).at((unsigned int)j - len).play == OPPONENT)
                    {
                        l = len - 1;
                        left = false;
                    }
                    break;
                default:
                    break;
            }
            len++;
        }
        if (right)
            r = 4;
        if (left)
            l = 4;
        if (r + l + 1 > 4)
            values += (r + l + 1) - 5 + 1;
        else
            values += 0;
        k++;
    }
    board.at((unsigned int)i).at((unsigned int)j).value = values;
}
