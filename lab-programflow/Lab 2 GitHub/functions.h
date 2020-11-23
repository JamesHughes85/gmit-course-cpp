
void HelloFunction() {
    cout << "Hello world!" << endl;// GitHub exercise 1
}

void HelloFunction (int val) {
    cout << "Hello world!" << val << endl;//GitHub exercise 2
}

void LabInfo() {// Task 1 - Lab Info
    cout <<" Question 1:" <<endl;
    cout << " James Hughes\n";
    cout << " Lab #2\n" << endl;
}

void LargerNum () {//Task 2 - Larger Number return
    cout <<" Question 2:" <<endl;
    float x,y;
    cout <<" Enter first number and hit return:\n" << endl;
    cin >>x;
    cout <<" Enter second number and hit return:\n" << endl;
    cin >>y;
    if (x>y){
    cout <<" "<< x << " is the larger number.\n"<< endl;
    }
    else if (x<y){
    cout <<" "<< y << " is the larger number.\n" << endl;
    }
    else{
    cout << " Both numbers are equal.\n" << endl;}
    }
void NumCheck () {//Task 3 - Check that the number is between 1 and 100
    float x;
    cout <<" Question 3:" <<endl;
    cout << " Enter a number and hit return:\n"<< endl;
    cin >>x;
    if (x=1&&x<=100){
    cout <<" This number is between 1 and 100.\n" << endl;
    }
    else{
    cout <<" This number is out of range!\n"<< endl;

}
}
void AreaOfCir () { //Task 5 - Area of a circle
    float radius, area;
    cout << " Enter the radius of the circle: \n ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << " The Area of circle is: \n"<< area <<endl;}

void AreaOfRec () { //Task 6
    float lenght, width, area;
    cout << " Enter the lenght of the rectangle \n: ";
    cin >> lenght;
    cout << " Enter the width of the rectangle \n: ";
    cin >> width;
    area = lenght * width;
    cout << " The Area of rectangle is: \n"<< area <<endl;}

void TempHum () { //Task 7
    float temp, humidity;
    cout <<"Please enter the temperature in degrees Fahrenheit and hit return:"<< endl;
    cin >>temp;
    if (temp>=95) {
    cout <<"WARNING! TEMPERATURE IS HIGH" <<endl; }
    else {
    cout << "The temperature is ok"<<endl; }
    cout <<"Please enter the percentage Humidity and hit return:"<<endl;
    cin >> humidity;
    if (humidity>=90) {
    cout <<"WARNING! HUMIDITY LEVEL HIGH/n" <<endl; }
    else {
    cout <<"Humidity level is normal/n"<<endl; }
}
void CircleAreaLoop () {//task 8
    int startRadius=0;
    int finishRadius=120;
    float pi=3.14;
    float area;
    for (int s=startRadius;s<=finishRadius;s++){
    area=pi*s*s;
    cout <<" When radius = "<<s<<" the area of the circle is "<<area<<" meters squared"<<endl;} }

void TempConversion () {//task 9
    float Celcius, Fahrenheit, Answer;
    int selection;
    cout <<" If you wish to covert Celcius to Fahrenheit please press 1 and hit return:"<< endl;
    cout <<" If you wish to covert Fahrenheit to Celcius please press 2 and hit return: \n"<<endl;
    cin >> selection;
    if (selection==1) {
    cout << " Enter value in degrees Celcius and hit reture:/n"<<endl;
    cin >> Celcius;
    Answer=((Celcius*9/5)+32);
    cout <<" The answer is " << Answer<< " Degrees Fahrenheit./n"<<endl;}
    else if (selection==2) {
    cout <<" Enter value in degrees Fahrenheit and hit reture:/n"<<endl;
    cin >> Fahrenheit;
    Answer=((Fahrenheit-32)*5/9);
    cout <<" The answer is " << Answer<< " Degrees Celcius."<<endl;}
    else {
    cout <<" You must select either 1 or 2:" <<endl;}
}

void EvenNum () {//task 10
    for(int even=1;even<=1000;even++) {
    if (even%2==0) {
    cout <<even; }
    }}
