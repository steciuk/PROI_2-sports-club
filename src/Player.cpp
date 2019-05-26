#include "../include/Player.hpp"

Player::Player(const std::string name, const std::string surname, const int shirtNumber)
{
    this->surname = surname;
    this->name = name;
    this->shirtNumber = shirtNumber;
    this->salary = 0;
}

Player::Player()
{
}

Player::~Player()
{
}


template <typename T>void Player::setSalary(T money){
    salary = money;
}

std::string Player::getInfo()
{
    std::string temp = name+" "+surname+" "+ std::to_string(shirtNumber);
    return temp;
}

std::string Player::getName()
{
    return this->name;
}

std::string Player::getSurname()
{
    return this->surname;
}

int Player::getShirtNo()
{
    return this->shirtNumber;
}
