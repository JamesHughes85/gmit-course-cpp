#include <iostream>
using namespace std;
void LabInfo() {
    cout<<"James Hughes" <<endl;
    cout<<"Lab using Classes" <<endl;
}
    class labInfo//Here is where I have created my class for storing lab information:
    public:
    string name;
    string labID;
    string day;
    string month;
    string year;
    void printInfo()
    {
    cout<<name<<"\n\n"<<labID<<"\n"<<day<<"\n"<<month<<"\n"<<year<<"\n"<<endl;
    }
    void setdate(int dayTemp,int monthTemp,int yearTemp){
    }
};//End of class definition:
    int main(){

    LabInfo ();//Task 1

    labInfo Info1;
    Info1.name = "James Hughes";
    Info1.labID = "G00267402";
    Info1.day = "Friday 12th";
    Info1.month = "February";
    Info1.year = "2021";
    Info1.printInfo();
    return 0;
}
