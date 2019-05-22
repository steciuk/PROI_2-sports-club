#ifndef SPECYFICCLUB_HPP
#define SPECYFICCLUB_HPP

#include <iostream>
#include <vector>
#include "../include/SpecyficPlayer.hpp"
#include "../include/FootBallPlayer.hpp"
#include "../include/VolleyBallPlayer.hpp"
#include "../include/HandBallPlayer.hpp"

class SpecyficClub
{
    private:
        std::vector<FootBallPlayer> footBallPlayers;
        std::vector<HandBallPlayer> handBallPlayers;
        std::vector<VolleyBallPlayer> volleyBallPlayers;

    public:
        void addFootBallPlayer(FootBallPlayer playerToAdd);
        void addHandBallPlayer(HandBallPlayer playerToAdd);
        void addVolleyBallPlayer(VolleyBallPlayer playerToAdd);

        void showSpecyficPlayers();//

};

void showSpecyficPlayer(SpecyficPlayer *wsk);




#endif
