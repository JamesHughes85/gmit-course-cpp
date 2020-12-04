#include <iostream>
using namespace std;
#include "functions.h"


int main()
{
    //1.Create a function called LabInfo() and call it from main.
    LabInfo();//task 1

    //2.Create a function in a file that can take two number like the following and return the Largest.
    system("pause");
    LargerNum();//task 2

    //3.Create a function that can check the user has input a number between 1 and 100.
    system("pause");
    NumCheck ();//task 3

    //4. Create a menu in your main program for the user to select the question/answer. Use a switch statement.
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
    cout <<" you are a baby!\n";
    break;
    case 2:
    cout << " Best years of your life!\n";
    break;
    case 3:
    cout << " Enjoy these years!\n";
    break;
    case 4:
    cout << " It could be worse!\n";
    break;
    case 5:
    cout << " Youth is wasted on the young!\n";
    break;
    case 6:
    cout << " The Golden years!\n";
    break;
    case 7:
    cout << " Fair play!\n";
    break;
    default:
    cout <<" Your selection was invalid:\n";
    return 0;

}
    //5.Make the function that can take in the radius value calculate the area of a circle and return the value.
    system("pause");
    cout <<" Question 5: Area of a circle.\n";
    AreaOfCir ();//task 5

    //6.Make a function that can take in two values and calculate the area of a rectangle and return the value to main.
    system("pause");
    cout <<" Question 6: Area of a rectangle.\n";
    AreaOfRec ();//task 6

    //7.Make a function that can take in two values  temperature and humidity and prints an alarm message if temperature >= 95 or if the humidity >=90.
    system("pause");
    cout <<" Question 7: Temperature and Humidity.\n";
    TempHum (); //task 7

    //8.In you main function use a loop to test your function Q5 for a range of values from 0 to 120 meters, in 1 meter steps.
    system("pause");
    cout <<" Question 8: Circle Area Loop.\n";
    CircleAreaLoop ();//task 8

    //9.Write a temperature conversion function that gives the user the option of converting a value of temperature to Celsius and Fahrenheit scales of temperature.
    system("pause");
    cout <<" Question 9: Temperature Converter.\n";
    TempConversion ();//task 9

    //10. Write a function to find all the even number from 0 to 1000 and print them.
    system("pause");
    cout <<" Question 10: Even Numbers.\n";
    EvenNum ();//task 10

    //11. Write a function that can take two integer values and finds all the odd numbers.
    system("pause");
    cout <<" Question 11: Odd Numbers.\n";
    OddNum ();//task 11

    //12.Create an overloaded function of Q.11 that can take in an array of values and find all the odd numbers.
    system("pause");
    cout <<" Question 12: Enter an Array and find the odd numbers.\n";
    int ArraySize;
    cout<<"Enter the number of integers in the Array and hit return:\n";
    cin>> ArraySize;
    int theArray [ArraySize];
    for (int i=0;i<ArraySize;i++){
    cout<<"Enter number "<< i+1 <<" of the array and hit return:\n";
    cin>> theArray[i];}
    OddNum (theArray,ArraySize);

    //13.Create a function that can create 6 random numbers.
    system("pause");
    cout <<" Question 13: Generate 6 Random numbers between 1 and 1000.\n";
    RandomNums ();// task 13

    //14.Create functions by copying-and-pasting the example code, fix the issues to get it working, declare variables etc
    system("pause");
    cout <<" Question 14: CodeFix.\n";
    CodeFix (); //task 14

    // 15. Create a function that will print “finished” 10 time, using 3 ways, for , while and a do while loops.
    system("pause");
    cout <<" Question 15: Finished.\n";
    LastOne ();} //task 15





