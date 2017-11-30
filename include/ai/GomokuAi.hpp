//
// Created by 53269 on 28/11/2017.
//

#ifndef GOMUKO_GOMUKOAI_HPP
#define GOMUKO_GOMUKOAI_HPP


#include "AGomokuAi.hpp"

class GomokuAi final : public AGomokuAi {
    /*
     * Variables
     */

    /*
     * Constructor and destructor
     */
public:
    GomokuAi();
    virtual ~GomokuAi() = default;

    /*
     * Methods
     */
protected:
    int gomoStart(unsigned int size) override;
    int gomoTurn(unsigned int x, unsigned int y) override;
    int gomoBegin() override;
    int gomoBoard(std::vector<std::string> &newBoard) override;
    int gomoInfo(const std::string &infoKey) override;
    int gomoEnd() override;
    int gomoAbout() override;
};

#endif //GOMUKO_GOMUKOAI_HPP
