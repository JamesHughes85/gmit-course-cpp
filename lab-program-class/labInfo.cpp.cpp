/*JAMES HUGHES 12/02/2021 - PROGRAMMING WITH C++
LECTURER - STEPHEN FOY - GMIT*/
#include <iostream>
#include "LabInfo.h"
using namespace std;

int main(){

    LabInfo data; //HERE I DECLARED MY 'LabInfo' CLASS AS 'data':
    data.Name = "James Hughes";
    data.LabID = "G00267402";
    data.SetDate(13,2,21); //OVERLOAD FUNCTION USED TO DECLARE IN PUBLIC

    data.printInfo(data); //PRINT OUT THE ABOVE INFORMATION:

return 0;
}

