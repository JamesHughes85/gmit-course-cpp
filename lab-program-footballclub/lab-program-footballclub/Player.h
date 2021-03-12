// James Hughes C++ Lab 6 - 12/03/21
#include <iostream>
#include "footballclub.h"
using namespace std;
#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#endif
#pragma once
class Player{
private:
    string forename;
    string surname;
    string position;
    int mobileNumber;
    int dob;
public:
    Player();
    Player(string forename, string surname);


    void printPlayerInfo();
    string getForename();
    string getSurname();
    void setName(string name);

    void setMobileNumber(int mobileNumber);
    int getMobileNumber();

    void setDOB(string Year){
}
    int getDOB(){
        return dob;

};
