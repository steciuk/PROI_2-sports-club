#ifndef HANDBALLPLAYER_HPP
#define HANDBALLPLAYER_HPP

#include <iostream>
#include <string>
#include "../include/Player.hpp"
#include "../include/SpecyficPlayer.hpp"

class HandBallPlayer : public Player, public SpecyficPlayer
{
    private:
        std::string position;
    public:
        HandBallPlayer(const std::string name, const std::string surname, const int shirtNumber, const std::string position);
        HandBallPlayer();
        ~HandBallPlayer();

        std::string getInfo();
        virtual void showPosition();
};

#endif
