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

void GomokuAi::setScore(unsigned int x, unsigned int y)
{
    unsigned int i = y - 2;
    unsigned int j;
    while (i < y + 3)
    {
        j = x - 2;
        while (j < x + 3)
        {
            if (j < board.size() && i < board.size() && j > 0 && i > 0 && board.at(i).at(j).play == NONE)
                setSquare(i, j);
            j++;
        }
        i++;
    }
}

void GomokuAi::setSquare(unsigned int i, unsigned int j) {
    unsigned int k;
    unsigned int len;
    int values = 0;
    unsigned int r;
    unsigned int l;
    bool right;
    bool left;

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
                        r = len;
                        right = false;
                    }
                    if (right && board.at(i).at(j + len).play == OPPONENT)
                    {
                        r = len;
                        right = false;
                    }
                    if (left && j - len < 0)
                    {
                        l = len;
                        left = false;
                    }
                    if (left && board.at(i).at(j - len).play == OPPONENT)
                    {
                        l = len;
                        left = false;
                    }
                    break;
                case 1:
                    if (right && (i + len >= board.size() || j + len >= board.size()))
                    {
                        r = len;
                        right = false;
                    }
                    if (right && board.at(i + len).at(j + len).play == OPPONENT)
                    {
                        r = len;
                        right = false;
                    }
                    if (left && (i - len < 0 || j - len < 0))
                    {
                        l = len;
                        left = false;
                    }
                    if (left && board.at(i - len).at(j - len).play == OPPONENT)
                    {
                        l = len;
                        left = false;
                    }
                    break;
                case 2:
                    if (right && i + len >= board.size())
                    {
                        r = len;
                        right = false;
                    }
                    if (right && board.at(i + len).at(j).play == OPPONENT)
                    {
                        r = len;
                        right = false;
                    }
                    if (left && i - len < 0)
                    {
                        l = len;
                        left = false;
                    }
                    if (left && board.at(i - len).at(j).play == OPPONENT)
                    {
                        l = len;
                        left = false;
                    }
                    break;
                case 3:
                    if (right && (i - len < 0 || j + len >= board.size()))
                    {
                        r = len;
                        right = false;
                    }
                    if (right && board.at(i - len).at(j + len).play == OPPONENT)
                    {
                        r = len;
                        right = false;
                    }
                    if (left && (i + len >= board.size() || j - len < 0))
                    {
                        l = len;
                        left = false;
                    }
                    if (left && board.at(i + len).at(j - len).play == OPPONENT)
                    {
                        l = len;
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
            values += r + l + 1;
        else
            values += 0;
        k++;
    }
    board.at(i).at(j).value = values;
}
