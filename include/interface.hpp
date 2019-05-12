#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include "SportsClub.hpp"
#include "FootBallPlayer.hpp"
#include "SpecyficClub.hpp"

bool interface(SportsClub &club, SpecyficClub &specClub){
    char control;
    std::string nameTemp, surnameTemp, positionTemp;
    int nr;
    std::cout << std::endl << "h-help"
              << std::endl << "q-add Player"
              << std::endl << "a-add Specyfic Players"
              << std::endl << "w-add Tournament"
              << std::endl << "p-print"
              << std::endl << "x-exit";

    std::cin >> control;
    switch(control)
    {
    case 'h':
    std::cout << std::endl << "h-help"
              << std::endl << "q-add Player"
              << std::endl << "a-add Specyfic Players"
              << std::endl << "w-add Tournament"
              << std::endl << "p-print"
              << std::endl << "x-exit";
        break;

    case 'q':{
        std::cout << "Name: ";
        std::cin >> nameTemp;
        std::cout << "Surname: ";
        std::cin >> surnameTemp;
        std::cout << "Shirt number: ";
        std::cin >> nr;
        club.addPlayer(nameTemp, surnameTemp, nr);

        break;}

    case 'a':{
        int howMany = 0;
        int choice;
        std::cout << "How many: ";
        std::cin >> howMany;

        for(int i=0; i<howMany; i++)
        {
            std::cout << "Name: ";
            std::cin >> nameTemp;
            std::cout << "Surname: ";
            std::cin >> surnameTemp;
            std::cout << "Shirt number: ";
            std::cin >> nr;
            std::cout << "Position: ";
            std::cin >> positionTemp;

            std::cout << std::endl << "1- Football"
                      << std::endl << "2- Volleyball"
                      << std::endl << "3- Handball";
            std::cin >> choice;
            switch(choice)
            {


                case 1:{
                    FootBallPlayer FPtemp(nameTemp,surnameTemp,nr,positionTemp);
                    specClub.addFootBallPlayer(FPtemp);
                break;}

                case 2:{
                    HandBallPlayer FPtemp(nameTemp,surnameTemp,nr,positionTemp);
                    specClub.addHandBallPlayer(FPtemp);
                break;}

                case 3:{
                    VolleyBallPlayer FPtemp(nameTemp,surnameTemp,nr,positionTemp);
                    specClub.addVolleyBallPlayer(FPtemp);
                break;}

            }
        }



        specClub.showSpecyficPlayers();


        break;}


    case 'w':{
        std::cout << "Podaj nazwe zawodow";
        std::cin >> nameTemp;
        std::cout << "Podaj liczbe zawodnikow";
        std::cin >> nr;
        std::vector<Player *> vekt;
        Player *temp;
        int nrTemp;
        for (int i = 0; i < nr; i++)
        {
            std::cout << "podaj nr zawodnika (nie koszulki)";
            std::cin >> nrTemp;
            temp = club.getPlayer(nrTemp);
            vekt.push_back(temp);
        }
        club.addTournament(nameTemp, vekt);
        break;}

    case 'p':{
        std::cout << std::endl;
        club.printAll();

        break;}
    case 'x':{
        return false;

        break;}
    }
    return true;
}

#endif
