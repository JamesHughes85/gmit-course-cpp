#include <iostream>
using namespace std;
#include "functions.h"


int main()
{
    LabInfo();//task 1

    LargerNum();//task 2

    NumCheck ();//task 3

//task 4 - Switch Statement

    int Age;
    cout << "If you are aged between 0  and 10  please press 1" << endl;
    cout << "If you are aged between 11 and 20  please press 2" << endl;
    cout << "If you are aged between 21 and 30  please press 3" << endl;
    cout << "If you are aged between 31 and 60  please press 4" << endl;
    cout << "If you are aged between 61 and 80  please press 5" << endl;
    cout << "If you are aged between 81 and 100 please press 6" << endl;
    cout << "If you are aged between 101 and ?  please press 7" << endl;
    cin >> Age;
    switch (Age){
    case 1:
    cout <<"you are a baby!" <<endl;
    break;
    case 2:
    cout << "Best years of your life!"<< endl;
    break;
    case 3:
    cout << "Enjoy these years!"<< endl;
    break;
    case 4:
    cout << "It could be worse!"<< endl;
    break;
    case 5:
    cout << "Youth is wasted on the young!"<< endl;
    break;
    case 6:
    cout << "The Golden years!"<< endl;
    break;
    case 7:
    cout << "Fair play!"<< endl;
    break;
    default:
    cout <<"Please pick a option between 1 and 7 and hit enter:"<< endl;
    return 0;
}
}
