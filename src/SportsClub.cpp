#include "SportsClub.hpp"

SportsClub::SportsClub(const std::string name)
{
    this->name = name;
}

SportsClub::~SportsClub(){}

bool SportsClub::addPlayer(const std::string name, const std::string surname, const int shirtNumber){
    Player temp = Player(name, surname, shirtNumber);
    this->players.push_back(temp);
    return true;
}

bool SportsClub::addTournament(const std::string name,const std::vector<Player *> &players)
{
    Tournament temp(name, players, players.size());
    this->tournaments.push_back(temp);
    return true;
}

SportsClub exampleClub(){
    SportsClub nowy=SportsClub("Przykladowy");
    nowy.addPlayer("Jan", "Kowalski", 1);
    nowy.addPlayer("Stachu", "Stachowski", 2);
    nowy.addPlayer("Marian", "Marianowicz", 3);
    nowy.addPlayer("Gerwalt", "Riv", 4);
    std::vector<Player *> vekt;
    Player *temp = nowy.getPlayer(2);
    vekt.push_back(temp); 
    nowy.addTournament("Jednoos", vekt);
    vekt.clear();
    temp = nowy.getPlayer(1);
    vekt.push_back(temp);
    temp = nowy.getPlayer(3);
    vekt.push_back(temp);
    nowy.addTournament("Dwuos", vekt);
    return nowy;
}

bool SportsClub::operator+(Player addedPlayer){
    players.push_back(addedPlayer);
    return true;
}

void SportsClub::printAll(){
    std::cout << this->name << std::endl<<"Players:\n";
    for (unsigned int i = 0;i<this->players.size();i++){
        std::cout << i << ". " <<this->players[i].getInfo() << std::endl;
    }
    std::cout << "\nTournaments:\n";
    for (unsigned int i = 0; i < this->tournaments.size(); i++){
        this->tournaments[i].Print();
    }
}

Player *SportsClub::getPlayer(const int num){
    std::vector<Player>::iterator iter = this->players.begin();
    for (int i = 0; i < num;i++,iter++){}
    return iter.base();
}