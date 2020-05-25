#include <iostream>

using namespace std;

int main() {

    bool var1 = true;
    bool var2 = false;
    if (var1) {
        //code is ran because the conditional statement is true
        cout << "This code is ran." << endl;

    }

    int num1 = 6;

    if (num1 > 7) {
        //code is ran because the conditional statement
        cout << "This code is ran." << endl;

    }
    else if (num1 < 5) {

        //code is ran because the conditional statement
        cout << "This statement is ran." << endl;

    }
    else {
        //this prints out if num1 meet the two conditional statements
        cout << "Num1 is equal to 6." << endl;
    }

    //switch statement
    char grade = 'B';
    switch(grade) {

        case 'A': {
            cout << "Your grade is an A." << endl;
            break;
        }
        case 'B': {
            //this statement gets printed
            cout << "Your grade is an B." << endl;
            break;
        }
        case 'C': {
            cout << "Your grade is an C." << endl;
            break;
        }
        case 'D': {
            cout << "Your grade is an D." << endl;
            break;
        }
        case 'F': {
            cout << "Your grade is an F." << endl;
            break;
        }
        default:
            cout << "You didn't get a grade." << endl;

    }

    return 0;

}
