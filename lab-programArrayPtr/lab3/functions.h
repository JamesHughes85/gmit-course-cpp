
void LabInfo() {
    cout << "James Hughes\n";
    cout << "Lab 3\n" << endl;
}

void Tree () {
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
