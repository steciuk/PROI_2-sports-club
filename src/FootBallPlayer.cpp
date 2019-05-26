#include "../include/FootBallPlayer.hpp"
#include <string>
FootBallPlayer::FootBallPlayer(const std::string name, const std::string surname, const int shirtNumber, const std::string position, const int age)
{
    this->surname = surname;
    this->name = name;
    this->shirtNumber = shirtNumber;
    this->salary = 0;
    this->position = position;
    this->age = age;
}

FootBallPlayer::FootBallPlayer()
{
}

FootBallPlayer::~FootBallPlayer()
{
}

//std::string FootBallPlayer::getInfo()
//{
//    std::string temp = name+" "+surname+" "+ std::to_string(shirtNumber);
//    return temp;
//}

void FootBallPlayer::showPosition()
{
    std::cout << " Pozycja pilkarza: " << position;
}

std::string FootBallPlayer::getAge()
{
    return std::to_string(this->age);
}
