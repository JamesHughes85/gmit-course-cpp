// James Hughes C++ Lab 5 - 26/02/21
#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#endif
class Player{
private:
    string forename;
    string surname;
    string position;
    int mobileNumber;
public:
 Player(string forename, string surname){
this->forename=forename;
this->surname=surname;
}
 Player(string forename, string surname, int mobileNumber, string position){
 this->forename=forename;
 this->surname=surname;
 this->mobileNumber=mobileNumber;
 this->position=position;
 }
    void printPlayerInfo(){
    }
    string getForename(){
    return forename;
    }
    string getSurname(){
    return surname;
    }
    int getMobileNumber(){
    return mobileNumber;
    }
    string getPosition(){
    return position;
    }

    void setForename(string forename){
    }
    void setSurname(string surname){
    }
    void setMobileNumber(int mobileNumber){
    }
     void setPosition(string position){
    }
};
