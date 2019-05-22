#ifndef VOLLEYBALLPLAYER_HPP
#define VOLLEYBALLPLAYER_HPP

#include <iostream>
#include <string>
#include "../include/Player.hpp"
#include "../include/SpecyficPlayer.hpp"

class VolleyBallPlayer : public Player, public SpecyficPlayer
{
    private:
        std::string position;
    public:
        VolleyBallPlayer(const std::string name, const std::string surname, const int shirtNumber, const std::string position);
        VolleyBallPlayer();
        ~VolleyBallPlayer();

        std::string getInfo();
        virtual void showPosition();
};

#endif
