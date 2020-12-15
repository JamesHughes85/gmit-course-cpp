#include <iostream>
using namespace std;
#include <string>
#include "functions.h"

int main()
{
LabInfo(); //Task 1

system("pause");

//Task 2
cout<<"\nQuestion 2.\n";
    int Array[6];
    int x;
    int sca;
    int w;
    cout<<"Please Enter in 6 Numbers:\n";
    for (int n=0;n<6;n++){
    cout<<"Please Enter number and hit Return: ";
    cin>>Array[n];
    if(Array[n]>100||Array[n]<0){
    n=x;
    cout<<"Number must be between 0 and 100!\n";}
    }
    cout<<"The Array you Entered is: ";
    for (int n=0;n<6;n++){
    cout<<Array[n]<<",";
}
system("pause\n");

cout <<"Task 7\n"<<endl;

Tree();


return 0;
}
