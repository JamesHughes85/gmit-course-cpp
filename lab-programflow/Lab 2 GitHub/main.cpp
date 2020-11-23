#include <iostream>
using namespace std;
#include "functions.h"


int main()
{
    LabInfo();//task 1

    LargerNum();//task 2

    NumCheck ();//task 3

//task 4 - Switch Statement

    int choice;
    cout << " Are you aged between  0 and 10?  -please press 1" << endl;
    cout << " Are you aged between 11 and 20?  -please press 2" << endl;
    cout << " Are you aged between 21 and 30?  -please press 3" << endl;
    cout << " Are you aged between 31 and 60?  -please press 4" << endl;
    cout << " Are you aged between 61 and 80?  -please press 5" << endl;
    cout << " Are you aged between 81 and 100? -please press 6" << endl;
    cout << " Are you aged older than 101????? -please press 7" << endl;
    cin >> choice;
    switch (choice){
    case 1:
    cout <<"you are a baby!\n" <<endl;
    break;
    case 2:
    cout << "Best years of your life!\n"<< endl;
    break;
    case 3:
    cout << "Enjoy these years!\n"<< endl;
    break;
    case 4:
    cout << "It could be worse!\n"<< endl;
    break;
    case 5:
    cout << "Youth is wasted on the young!\n"<< endl;
    break;
    case 6:
    cout << "The Golden years!\n"<< endl;
    break;
    case 7:
    cout << "Fair play!\n"<< endl;
    break;
    default:
    cout <<"Your selection was invalid:\n"<< endl;
    return 0;
}
    AreaOfCir ();//task 5

    AreaOfRec ();//task 6

    TempHum (); //task 7




}


