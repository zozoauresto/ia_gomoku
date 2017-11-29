#include <iostream>
#include "../include/ai/GomokuAi.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    GomokuAi *gomokuAi = new GomokuAi();

    gomokuAi->gomoGo();
    return 0;
}