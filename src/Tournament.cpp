#include "Tournament.hpp"

Tournament::Tournament(const std::string name,const std::vector<Player*> &players,unsigned int numPlayers):
    name(name),
    playerNum(numPlayers),
    playersList(numPlayers)
{
    for (unsigned int i = 0; i < numPlayers; i++)
    {
        this->playersList.setElement(i, players[i]);
    }
}

Tournament::~Tournament(){}


void Tournament::Print(){
    std::cout << this->name << std::endl;
    Player *temp;
    for (int i = this->playerNum - 1; i >= 0; i--)
    {
        temp = this->playersList.getElement(i);
        std::string temp2 = temp->getInfo();
        std::cout << temp2 << std::endl;
    }
}
