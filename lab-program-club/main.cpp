// James Hughes C++ Lab 6 - 12/03/21
#include <iostream>
using namespace std;
#include "football_club.h"
#include "player.h"

int main()
{
 FootballClub footballClub1("Ballina Stephenites", "North Mayo");
 FootballClub footballClub2 ("Green & Red");
    cout <<"Clubname: "<< footballClub1.getClubname()<<endl;
    cout <<"District: " << footballClub1.getDistrict()<<endl;;
    cout <<"Strip Colour: "<<footballClub2.getStripColour()<<endl;

Player Player1("James", "Hughes");
Player Player2("James", "Hughes",879860644, "Manager");
    cout<<"Forename: "<<Player1.getForename()<<endl;
    cout<<"Surname: "<<Player1.getSurname()<<endl;
    cout<<"Position: "<<Player2.getPosition()<<endl;
    cout<<"Phone Number: "<<Player2.getMobileNumber()<<endl;
    cout<<"Position: " <<Player2.getPosition()<<endl;

return 0;
}
