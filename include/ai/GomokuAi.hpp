//
// Created by 53269 on 28/11/2017.
//

#ifndef GOMUKO_GOMUKOAI_HPP
#define GOMUKO_GOMUKOAI_HPP

#include <vector>
#include <array>
#include <tuple>
#include "AGomokuAi.hpp"

#define PLAYER 1
#define OPPONENT 2
#define NONE 0

class GomokuAi final : public AGomokuAi {
    /*
     * Variables
     */

private:
    typedef struct s_data
    {
        int play;
        int value;
    }BoardData;

    std::vector<std::vector<BoardData>> board;

    /*
     * Constructor and destructor
     */

public:
    GomokuAi();
    virtual ~GomokuAi() = default;
    void setScore(unsigned int, unsigned int);
    void setSquare(unsigned int, unsigned int);
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
