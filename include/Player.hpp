#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>

class Player
{
protected:
  std::string name;
  std::string surname;
  int shirtNumber;
  int salary;

public:
  Player(const std::string name, const std::string surname, const int shirtNumber);
  Player();
  ~Player();


  template<typename T> void setSalary(T);
  std::string getInfo();
  std::string getName();
  std::string getSurname();
  int getShirtNo();
};

#endif
