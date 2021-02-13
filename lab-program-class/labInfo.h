/*JAMES HUGHES 12/02/2021 - PROGRAMMING WITH C++
LECTURER - STEPHEN FOY - GMIT*/
#ifndef LABINFO_H_INCLUDED
#define LABINFO_H_INCLUDED
#endif // LABINFO_H_INCLUDED
using namespace std;

    class LabInfo{ //HERE I MADE A CLASS CALLED LAB INFO
    public://DATA  BELOW WILL BE PUBLIC
    string Name;
    string LabID;

    void SetDate(int DayInfo,int MonthInfo,int YearInfo){ //FUNCTION IS USED TO ACCESS PRIVATE DATA:
    Day=DayInfo;
    Month=MonthInfo;
    Year=YearInfo;
        }
    void printInfo(LabInfo data){ //FUNCTION TO PRINT 'LabInfo':
    cout<<data.Name<<endl;
    cout<<data.LabID<<endl;
    cout<<"Date: "<<data.Day<<"/"<<data.Month<<"/"<<data.Year<<endl;
}
    private: //ALL DATA IN PRIVATE WILL NOT BE PRINTED:
    int Day;
    int Month;
    int Year;
};


