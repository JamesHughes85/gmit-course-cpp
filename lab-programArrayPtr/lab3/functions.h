 int Array[6];
    int x;
    int ScalarNum;
    int w;

void LabInfo() { //Task 1 Function
    cout << "James Hughes\n";
    cout << "Lab 3\n" << endl;}

void NumAndMem() { //Task 2 Function
    cout<<"Please Enter in 6 Numbers:\n\n";
    for (int n=0;n<6;n++){
    cout<<"Please Enter number and hit Return:\n";
    cin>>Array[n];
    if(Array[n]>100||Array[n]<0){
    n=x;
    cout<<"Number must be between 0 and 100!\n";}
    }
    cout<<"The Array you Entered is: ";
    for (int n=0;n<6;n++){
    cout<<Array[n]<<",";
}
}

void ArrayAddress() { //Task 3 Function

    cout<<"The addresses of each number of the array are: { ";
    for (int n=0;n<6;n++){
    if (n==5){
    cout<<&Array[n]<<" }";
    }
    else{
    cout<<&Array[n]<<" , ";
        }
    }}

void Scaler(){
    cout<<"Enter Scalar Number and hit Enter: ";
    cin>>ScalarNum;
    cout<<endl;
}

void ArrayReference(int* ArrayRef,int n,int* ScalarNumRef){
    for (int i=0;i<n;i++){
    Array[i]=(Array[i])*(ScalarNum);
    }
    cout<<endl;
}

void Tree () { //Task 7 Function
    char cTree;
    int iSize;
    int iSpace;
    int iChars;
    cout << "Enter the height of your Christmas tree: ";
    cin >> iSize;
    cout << "Enter the character you would like to use for your tree: ";
    cin >> cTree;
    for(int i = 0; i < iSize; i++){
    iSpace = (iSize-i)-1;
    iChars = (2*i)+1;
    string sSpace(iSpace, '_');
    string sTree(iChars, cTree);
    cout << sSpace << sTree << sSpace << endl;}}



