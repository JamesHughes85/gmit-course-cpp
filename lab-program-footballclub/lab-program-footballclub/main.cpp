// James Hughes C++ Lab 6 - 12/03/21
#pragma once
#include <iostream>
using namespace std;
#include "footballclub.h"
#include "Player.h"

int main()
{
    FootballClub obj("Na Stiofanaigh", "Ballina");
    obj.printInfo();
    obj.setClubname("The Stephenites");

    string clubName = obj.getClubname();
    clubName = obj.getDistrict();
    cout<< clubName <<endl;

    int maxSquad =30;
    Player player1;


        player1.setMobileNumber(34567);
        player1.setName("JohnPaul");
        player1.setDOB("85");
        obj.addPlayer(player1,0);

        player2.setMobileNumber(45678);
        player2.setName("MartinJoe");
        player2.setDOB("86");
        obj.addPlayer(player2,1);
    }
 return 0;
}
