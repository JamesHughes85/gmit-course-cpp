// James Hughes C++ Lab 6 - 12/03/21
#include <iostream>
using namespace std;
#pragma once
#ifndef FOOTBALLCLUB_H_INCLUDED
#define FOOTBALLCLUB_H_INCLUDED
#include "Player.h"
#endif

class FootballClub{
private:
    string clubname;
    string district;
    string stripColour;
    Player squad[30];
    Player team[15];

public:
    FootballClub();
    FootballClub(string clubname, string district);
    string getClubname();
    string getDistrict();

    void setClubname(string clubname);
    void printInfo();

    void addPlayer(Player tmp,int position){
    team[position].setName(tmp.getSurname);
    team[position].setDOB(tmp.getDOB());



};
