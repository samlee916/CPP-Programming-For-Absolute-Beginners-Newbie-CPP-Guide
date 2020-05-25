#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    cout << left;
    string employeeName;
    int employeeSalary;
    ifstream employeeFile("C:\\Users\\slee5\\Desktop\\C++ Programming For Absolute Beginners Newbie C++ Guide\\CPPExample10.txt");
    //error message if file not found
    if(!employeeFile) {
        cout << "Employee file not find.";
        return -9;
    }
    cout << "Human Resources Payroll List\n";
    cout << setw(25) << "Full Name" << "  Salary" << endl;
    //to not read the first two lines
    employeeFile.ignore(255, '\n');
    employeeFile.ignore(255, '\n');

    //pre-read
    getline(employeeFile, employeeName, ',');
    employeeFile >> employeeSalary;

    while(!employeeFile.eof()) {

        cout<< setw(25) << employeeName << employeeSalary << endl;
        //post-read
        getline(employeeFile, employeeName, ',');
        employeeFile >> employeeSalary;
    }

    return 0;

}
