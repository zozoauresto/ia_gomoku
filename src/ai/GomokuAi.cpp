//
// Created by 53269 on 28/11/2017.
//

#include "../../include/ai/GomokuAi.hpp"

//TODO: gomuSend est à changer (correspond à la réponse attendu par le programme)
int GomokuAi::gomoStart(unsigned int size) {
    gomuSend("OK Start");
    return 0;
}

int GomokuAi::gomoTurn(unsigned int x, unsigned int y) {
    gomuSend("OK Turn");
    return 0;
}

int GomokuAi::gomoBegin() {
    gomuSend("OK Begin");
    return 0;
}

int GomokuAi::gomoInfo(const std::string &infoKey) {
    gomuSend("OK Info");
    return 0;
}

int GomokuAi::gomoEnd() {
    gomuSend("OK End");
    return 0;
}

int GomokuAi::gomoAbout() {
    gomuSend("OK About");
    return 0;
}

int GomokuAi::gomoBoard(std::vector<std::string> &newBoard) {
    gomuSend("OK Board");
    return 0;
}
