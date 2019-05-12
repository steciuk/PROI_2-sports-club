#include "HandBallPlayer.hpp"

HandBallPlayer::HandBallPlayer(const std::string name, const std::string surname, const int shirtNumber, const std::string position)
{
    this->surname = surname;
    this->name = name;
    this->shirtNumber = shirtNumber;
    this->salary = 0;
    this->position = position;
}

HandBallPlayer::HandBallPlayer()
{
}

HandBallPlayer::~HandBallPlayer()
{
}

std::string HandBallPlayer::getInfo()
{
    std::string temp = name+" "+surname+" "+ std::to_string(shirtNumber);
    return temp;
}

void HandBallPlayer::showPosition()
{
    std::cout << " Pozycja: " << position;
}
