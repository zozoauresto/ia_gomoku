//
// Created by 53269 on 29/11/2017.
//

#ifndef GOMUKO_AGOMUKOAI_HPP
#define GOMUKO_AGOMUKOAI_HPP

#include <iostream>
#include "IGomukoAi.hpp"

class AGomukoAi : public IGomukoAi {
    /*
     * Variables
     */

    /*
     * Constructor and destructor
     */
public:
    AGomukoAi() = default;
    ~AGomukoAi() = default;

    /*
     * Methods
     */
private:
    /*
    //Pure override of algorithm methods.
    int gomuStart(unsigned int size) override { return (84); };
    int gomuTurn(unsigned int x, unsigned int y) override { return (84); };
    int gomuBegin() override { return (84); };
    int gomuBoard() override { return (84); };
    int gomuInfo(const std::string &infoKey) override { return (84); };
    int gomuEnd() override { return (84); };
    int gomuAbout() override { return (84); };
     */

    //Protocol communicating device
private:



protected:
    void gomuSend(const std::string &toSend) {
        std::cout <<  toSend << std::endl;
    };

public:
    //TODO: Gérer les fonctions où j'ai foutu des paramètres en shlag par défaut (genre gomuTurn(0, 0))
    int gomuGo() {
        std::string line;

        while (std::getline(std::cin, line)) {
            if (line.find("TURN")) {
                if (gomuTurn(0, 0) == 84)
                    return 84;
            }
            else if (line.find("START")) {
                if (gomuStart(10) == 84)
                    return 84;
            }
            else if (line.find("BEGIN")) {
                if (gomuBegin() == 84)
                    return 84;
            }
            else if (line.find("BOARD")) {
                if (gomuBoard() == 84)
                    return 84;
            }
            else if (line.find("INFO")) {
                if (gomuInfo("DEBUG") == 84)
                    return 84;
            }
            else if (line.find("ABOUT")) {
                if (gomuAbout() == 84)
                    return 84;
            }
            else if (line.find("END"))
                return gomuEnd();
            else
                gomuSend("UNKNOWN Whoops, I didn't understood what you said! Maybe the command isn't implemented?");
        }
    };
};

#endif //GOMUKO_AGOMUKOAI_HPP
