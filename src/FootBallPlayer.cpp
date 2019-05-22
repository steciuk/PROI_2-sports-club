#include "../include/FootBallPlayer.hpp"

FootBallPlayer::FootBallPlayer(const std::string name, const std::string surname, const int shirtNumber, const std::string position)
{
    this->surname = surname;
    this->name = name;
    this->shirtNumber = shirtNumber;
    this->salary = 0;
    this->position = position;
}

FootBallPlayer::FootBallPlayer()
{
}

FootBallPlayer::~FootBallPlayer()
{
}

std::string FootBallPlayer::getInfo()
{
    std::string temp = name+" "+surname+" "+ std::to_string(shirtNumber);
    return temp;
}

void FootBallPlayer::showPosition()
{
    std::cout << " Pozycja: " << position;
}
