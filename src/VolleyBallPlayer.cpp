#include "../include/VolleyBallPlayer.hpp"
#include <string>

VolleyBallPlayer::VolleyBallPlayer(const std::string name, const std::string surname, const int shirtNumber, const std::string position, const int height)
{
    this->surname = surname;
    this->name = name;
    this->shirtNumber = shirtNumber;
    this->salary = 0;
    this->position = position;
    this->height = height;
}

VolleyBallPlayer::VolleyBallPlayer()
{
}

VolleyBallPlayer::~VolleyBallPlayer()
{
}

//std::string VolleyBallPlayer::getInfo()
//{
//    std::string temp = name+" "+surname+" "+ std::to_string(shirtNumber);
//    return temp;
//}

void VolleyBallPlayer::showPosition()
{
    std::cout << " Pozycja siatkarza: " << position;
}

std::string VolleyBallPlayer::getHeight()
{
    return std::to_string(this->height);
}
