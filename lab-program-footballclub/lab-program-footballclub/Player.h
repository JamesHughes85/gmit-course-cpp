// James Hughes C++ Lab 6 - 12/03/21
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
 Player(string forename, string surname);
}
 Player(string forename, string surname, int mobileNumber, string position){

    void printPlayerInfo();
    string getForename();
    string getSurname();

    void setName(string name);

    void setMobileNumber(int mobileNumber);
    int getMobileNumber();

    void setDOB(string Year){

    }

};
