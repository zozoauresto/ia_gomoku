//
// Created by 53269 on 28/11/2017.
//

#ifndef GOMUKO_IGOMUKOAI_HPP
#define GOMUKO_IGOMUKOAI_HPP

#include <string>

//TODO: Peut-être changer en abstract class (ou en faire une qui hérite de l'interface) afin d'y gérer tout l'envoi/réception du protocol
class IGomukoAi {
    /*
     * Methods
     */
protected:
    //First call to tell you to create a new board.
    virtual int gomuStart(unsigned int size) = 0;

    //Expects you to make a move. The params are the last opponents move.
    virtual int gomuTurn(unsigned int x, unsigned int y) = 0;

    //Expects you to make a move. This method means you are the first to play.
    virtual int gomuBegin() = 0;

    //Forces you to get a new field.
    virtual int gomuBoard() = 0;

    //Expects you to know game parameters. You can ignore them, but if you exeed the time limit you lose.
    virtual int gomuInfo(const std::string &infoKey) = 0;

    //Expects you to terminate as soon as possible without any output.
    virtual int gomuEnd() = 0;

    //Expects you to send a one line information about the program.
    // Each info must be written as keyword, equals sign, text value in quotation marks.
    // Recommended keywords are name, version, author, country, www, email.
    // Values should be separated by commas that can be followed by spaces.
    virtual int gomuAbout() = 0;
};

#endif //GOMUKO_IGOMUKOAI_HPP
