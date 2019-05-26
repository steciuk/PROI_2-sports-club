#include "../include/HandBallPlayer.hpp"
#include <string>
HandBallPlayer::HandBallPlayer(const std::string name, const std::string surname, const int shirtNumber, const std::string position, const bool isLeftHanded)
{
    this->surname = surname;
    this->name = name;
    this->shirtNumber = shirtNumber;
    this->salary = 0;
    this->position = position;
    this->isLeftHanded = isLeftHanded;
}

HandBallPlayer::HandBallPlayer()
{
}

HandBallPlayer::~HandBallPlayer()
{
}

//std::string HandBallPlayer::getInfo()
//{
//    std::string temp = name+" "+surname+" "+ std::to_string(shirtNumber);
//    return temp;
//}

void HandBallPlayer::showPosition()
{
    std::cout << " Pozycja szczypiornisty: " << position;
}

std::string HandBallPlayer::getIsLeftHanded()
{
   if(this->isLeftHanded)
        return "yes";
   else
        return "no";
}
