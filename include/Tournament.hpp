#ifndef TOURNAMENT_HPP
#define TOURNAMENT_HPP

#include <iostream>
#include <vector>
#include "List.hpp"
#include "Player.hpp"

class Tournament
{
private:
  std::string name;
  int playerNum;
  List<Player*> playersList;

public:
  Tournament(const std::string name,const std::vector<Player*> &players,unsigned int);
  Tournament();
  ~Tournament();
  void isCopied() { playersList.isCopied(); }
  void Print();
};

#endif