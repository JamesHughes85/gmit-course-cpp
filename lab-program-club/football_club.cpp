// James Hughes C++ Lab 5 - 26/02/21
#include <iostream>
using namespace std;

class footballClub{
private:
    string clubname;
    string district;
    string stripColour;
public footballClub(string clubname, string district){
this->clubname=clubname;
this->district=district;
}
footballClub(string stripColour){
this->stripColour=stripColour;
}
    void printInfo(){
    }
    string getClubname(){
    return clubname;
    }
    string getDistrict(){
    return district;
    }
    string getStripColour(){
    return stripColour;
    }
    void setClubname(string clubname){
    }
    void setDistrict(string district){
    }
    void setStripColour(string stripColour){
    }
};