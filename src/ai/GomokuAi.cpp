//
// Created by 53269 on 28/11/2017.
//

#include "../../include/ai/GomokuAi.hpp"

//TODO: gomuSend est à changer (correspond à la réponse attendu par le programme)
int GomokuAi::gomoStart(unsigned int size) {
    gomuSendStart(true);
    return 0;
}

int GomokuAi::gomoTurn(unsigned int ennemyX, unsigned int ennemyY) {
    gomuSendTurn(1, 1);
    return 0;
}

int GomokuAi::gomoBegin() {
    gomuSendTurn(1, 1);
    return 0;
}

int GomokuAi::gomoInfo(const std::string &infoKey) {
    return 0;
}

int GomokuAi::gomoEnd() {
    return 0;
}

int GomokuAi::gomoAbout() {
    gomuSendAbout();
    return 0;
}

int GomokuAi::gomoBoard(std::vector<std::string> &newBoard) {
    gomuSendTurn(1, 1);
    return 0;
}

GomokuAi::GomokuAi() {
    about = R"(name="gomukobrain", version="1.0", author="Devia", country="FR")";
}
