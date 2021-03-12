// James Hughes C++ Lab 6 - 12/03/21
#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED
#endif

class FootballClub{
private:
    string clubname;
    string district;
    string stripColour;
public:
 FootballClub(string clubname, string district){
this->clubname=clubname;
this->district=district;
}
FootballClub(string stripColour){
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

