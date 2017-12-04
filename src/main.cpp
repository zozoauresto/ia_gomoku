#include <iostream>
#include "../include/ai/GomokuAi.hpp"


void print_map(std::vector<std::vector<BoardData>> board)
{
    for (auto i : board)
    {
        for (auto j : i)
        {
            std::cout << j.value << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    GomokuAi *gomokuAi = new GomokuAi();

    gomokuAi->gomoStart(19);
    gomokuAi->setScore(0, 0);
    print_map(gomokuAi->board);
    return 0;
}