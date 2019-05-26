#ifndef FOOTBALLPLAYER_H
#define FOOTBALLPLAYER_H

#include <iostream>
#include <string>
#include "../include/Player.hpp"
#include "../include/SpecyficPlayer.hpp"

class FootBallPlayer : public Player, public SpecyficPlayer
{
    private:
        std::string position;
        int age;
    public:
        FootBallPlayer(const std::string name, const std::string surname, const int shirtNumber, const std::string position, int age);
        FootBallPlayer();
        ~FootBallPlayer();

//        std::string getInfo();
        virtual void showPosition();
        std::string getAge();
};

#endif
