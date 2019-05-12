#ifndef SPORTS_CLUB_HPP
#define SPORTS_CLUB_HPP

#include <iostream>
#include "Player.hpp"
#include <vector>
#include "Tournament.hpp"

/**
klasa
**/
class SportsClub
{
private:
  std::string name;
  std::vector<Player> players;
  std::vector<Tournament> tournaments;

public:
  SportsClub(const std::string name);
  ~SportsClub();

  bool operator+(Player);
  bool addPlayer(const std::string name, const std::string surname, const int shirtNumber);
  Player *getPlayer(const int num);
  bool addTournament(const std::string name, const std::vector<Player *> &players);
  void printAll();
};

SportsClub operator+(SportsClub, Player);

SportsClub exampleClub();

#endif
