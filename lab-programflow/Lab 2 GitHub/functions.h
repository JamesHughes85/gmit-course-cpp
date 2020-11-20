
void HelloFunction() {
    cout << "Hello world!" << endl;// GitHub exercise 1
}

void HelloFunction (int val) {
    cout << "Hello world!" << val << endl;//GitHub exercise 2
}

void LabInfo() {// Task 1 - Lab Info
    cout << " James Hughes\n";
    cout << " Lab #2\n" << endl;
}

void LargerNum () {//Task 2 - Larger Number return
    float x,y;
    cout <<" Enter first number and hit return\n" << endl;
    cin >>x;
    cout <<" Enter second number and hit return\n" << endl;
    cin>>y;
    if (x>y){
    cout << x << " is the larger number\n"<< endl;
    }
    else if (x<y){
    cout << y << " is the larger number\n" << endl;
    }
    else{
    cout << " Both numbers are equal\n" << endl;}
    }
void NumCheck () {//Task 3 - Check that the number is between 1 and 100
    float x;
    cout << " Enter a number and hit return\n"<< endl;
    cin >>x;
    if (x=1&&x<=100){
    cout <<" This number is between 1 and 100\n" << endl;
    }
    else{
    cout <<" This number is out of range\n"<< endl;

}
}
void AreaOfCir () { //Task 5 - Area of a circle
    float radius, area;
    cout << "Enter the radius of the circle: \n ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << " The Area of circle is: \n"<< area <<endl;}

void AreaOfRec () { //Task 6
    float lenght, width, area;
    cout << "Enter the lenght of the rectangle \n: ";
    cin >> lenght;
    cout << "Enter the width of the rectangle \n: ";
    cin >> width;
    area = lenght * width;
    cout << " The Area of rectangle is: \n"<< area <<endl;}
