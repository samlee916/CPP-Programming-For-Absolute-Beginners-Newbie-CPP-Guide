#include <iostream>
#include <iomanip>

using namespace std;
void printSalary(int);
void printSalary(double);
void printSalary(float);
void printSalary(string);

//function overloading example
int main() {

    string salary;
    //double salary;
    cout << "Enter your salary: ";
    getline(cin, salary);
    //cin << salary;
    printSalary(salary);
    return 0;

}

void printSalary(int x) {
    cout << x << endl;
}

void printSalary(double x) {
    cout << x << endl;
}

void printSalary(string x) {
    cout << x << endl;
}

void printSalary(float x) {
    cout << x << endl;
}
