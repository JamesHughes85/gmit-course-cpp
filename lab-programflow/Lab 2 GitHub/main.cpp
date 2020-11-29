#include <iostream>
using namespace std;
#include "functions.h"


int main()
{
    LabInfo();//task 1

    system("pause");
    LargerNum();//task 2

    system("pause");
    NumCheck ();//task 3


    system("pause");//task 4 - Switch Statement

    int choice;
    cout <<" Question 4: Age range Switch Statement.\n";
    cout << " Are you aged between  0 and 10?  -please press 1:\n";
    cout << " Are you aged between 11 and 20?  -please press 2:\n";
    cout << " Are you aged between 21 and 30?  -please press 3:\n";
    cout << " Are you aged between 31 and 60?  -please press 4:\n";
    cout << " Are you aged between 61 and 80?  -please press 5:\n";
    cout << " Are you aged between 81 and 100? -please press 6:\n";
    cout << " Are you aged older than 101????? -please press 7:\n";
    cin >> choice;
    switch (choice){
    case 1:
    cout <<" you are a baby!\n" <<endl;
    break;
    case 2:
    cout << " Best years of your life!\n"<< endl;
    break;
    case 3:
    cout << " Enjoy these years!\n"<< endl;
    break;
    case 4:
    cout << " It could be worse!\n"<< endl;
    break;
    case 5:
    cout << " Youth is wasted on the young!\n"<< endl;
    break;
    case 6:
    cout << " The Golden years!\n"<< endl;
    break;
    case 7:
    cout << " Fair play!\n"<< endl;
    break;
    default:
    cout <<" Your selection was invalid:\n"<< endl;
    return 0;

}
    system("pause");
    cout <<" Question 5: Area of a circle.\n";
    AreaOfCir ();//task 5

    system("pause");
    cout <<" Question 6: Area of a rectangle.\n";
    AreaOfRec ();//task 6

    system("pause");
    cout <<" Question 7: Temperature and Humidity." <<endl;
    TempHum (); //task 7

    system("pause");
    cout <<" Question 8: Circle Area Loop." <<endl;
    CircleAreaLoop ();//task 8

    system("pause");
    cout <<" Question 9: Temperature Converter." <<endl;
    TempConversion ();//task 9

    system("pause");
    cout <<" Question 10: Even Numbers." <<endl;
    EvenNum ();//task 10

    system("pause");
    cout <<" Question 11: Odd Numbers." <<endl;
    OddNum ();//task 11

    system("pause");
    cout <<" Question 12: Enter an Array and find the odd numbers." <<endl;
    int ArraySize;
    cout<<"Enter the number of integers in the Array and hit return:"<<endl;
    cin>> ArraySize;
    int theArray [ArraySize];
    for (int i=0;i<ArraySize;i++){
    cout<<"Enter number "<< i+1 <<" of the array and hit return: "<<endl;
    cin>> theArray[i];}
    OddNum (theArray,ArraySize);
}


