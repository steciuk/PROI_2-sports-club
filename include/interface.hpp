#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include "../include/SportsClub.hpp"
#include "../include/FootBallPlayer.hpp"
#include "../include/HandBallPlayer.hpp"
#include "../include/VolleyBallPlayer.hpp"
#include "../include/SpecyficClub.hpp"
#include <limits>

bool interface(SportsClub &club, SpecyficClub &specClub){
    char control;
    std::string nameTemp, surnameTemp, positionTemp;
    int nr;
    std::cout << std::endl << "h-help"
              << std::endl << "q-add Player"
              << std::endl << "a-add Specyfic Players"
              << std::endl << "w-add Tournament"
              << std::endl << "p-print"
              << std::endl << "o-print specyfic players"
              << std::endl << "x-exit"<<std::endl;

    std::cin >> control;
    switch(control)
    {
    case 'h':
    std::cout << std::endl << "h-help"
              << std::endl << "q-add Player"
              << std::endl << "a-add Specyfic Players"
              << std::endl << "w-add Tournament"
              << std::endl << "p-print"
              << std::endl << "o-print specyfic players"
              << std::endl << "x-exit"<<std::endl;
        break;

    case 'q':{
        bool input = true;
        std::cout << "Name: ";
        std::cin >> nameTemp;
        std::cout << "Surname: ";
        std::cin >> surnameTemp;
        while(input)
        {
            try
            {
                std::cout << "Shirt number: ";
                std::cin >> nr;
                if(!std::cin)
                {
                    throw -1;
                }
                input = false;
            }
            catch(...)
            {
                std::cout << "Value must be numeric!";
                input = true;
                std::cin.clear(); // Clear error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear out the input buffer

            }
        }
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
                    int age = 0;
                    std::cout << std::endl << "Age: ";
                    std::cin >> age;
                    FootBallPlayer FPtemp(nameTemp,surnameTemp,nr,positionTemp, age);
                    specClub.addFootBallPlayer(FPtemp);
                break;}

                case 2:{
                    bool isLeftHanded;
                    std::cout << std::endl << "Is Left Handed? (0,1): ";
                    std::cin >> isLeftHanded;
                    HandBallPlayer FPtemp(nameTemp,surnameTemp,nr,positionTemp, isLeftHanded);
                    specClub.addHandBallPlayer(FPtemp);
                break;}

                case 3:{
                    int height = 0;
                    std::cout << std::endl << "Height: ";
                    std::cin >> height;
                    VolleyBallPlayer FPtemp(nameTemp,surnameTemp,nr,positionTemp, height);
                    specClub.addVolleyBallPlayer(FPtemp);
                break;}

            }
        }



        specClub.showSpecyficPlayers();


        break;}


    case 'w':{
        std::cout << "Podaj nazwe zawodow: ";
        std::cin >> nameTemp;
        std::cout << "Podaj liczbe zawodnikow: ";
        std::cin >> nr;
        std::vector<Player *> vekt;
        Player *temp;
        int nrTemp;
        for (int i = 0; i < nr; i++)
        {
            std::cout << "podaj nr zawodnika (nie koszulki): ";
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
    case 'o':{
        std::cout << std::endl;
        specClub.showSpecyficPlayers();

        break;}
    case 'x':{
        return false;

        break;}

    default:{
        std::cout << "Wrong input!";

        break;}
    }

    return true;
}

#endif
