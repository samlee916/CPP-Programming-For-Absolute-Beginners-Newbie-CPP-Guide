#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//have to declare functions outside the scope as well
void printHello();
double getAge();
string getName();
string printName(string name);

int main() {

    printHello();
    cout << getName() << " is " << getAge() << " years old." << endl;
    //passing a parameter to a function
    cout << printName("Diana");
    return 0;

}

//functions in C++
string printName(string name) {
    return name;
}

void printHello() {

    cout << "Hello," << endl;

}

double getAge() {

    double age = 22.0;
    return age;

}

string getName() {

    return "Bob";

}

