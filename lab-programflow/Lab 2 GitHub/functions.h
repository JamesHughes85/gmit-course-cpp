
void HelloFunction() {
    cout << "Hello world!" << endl;// GitHub exercise 1
}

void HelloFunction (int val) {
    cout << "Hello world!" << val << endl;//GitHub exercise 2
}

void LabInfo() {// Task 1 - Lab Info
    cout << "James Hughes\n";
    cout << "Lab #2" << endl;
}

void LargerNum () {//Task 2 - Larger Number return
    float x,y;
    cout <<"Enter first number and hit return" << endl;
    cin >>x;
    cout <<"Enter second number and hit return" << endl;
    cin>>y;
    if (x>y){
    cout << x << " is the larger number"<< endl;
    }
    else if (x<y){
    cout << y << " is the larger number" << endl;
    }
    else{
    cout << "Both numbers are equal" << endl;}
    }
void NumCheck () {//Task 3 - Check that the number is between 1 and 100
    float x;
    cout << "Enter a number and hit return"<< endl;
    cin >>x;
    if (x=1&&x<=100){
    cout <<"This number is between 1 and 100" << endl;
    }
    else{
    cout <<"This number is out of range"<< endl;
}
}
