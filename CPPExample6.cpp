#include <iostream>
//A small calculator program

using namespace std;

int main() {

    int choice;
    double number1, number2;

    cout << "Here are your 4 options: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << endl << "Enter a choice: ";
    cin >> choice;

    switch (choice) {

    case 1: {
        cout << "Enter number 1: ";
        cin >> number1;
        cout << "Enter number 2: ";
        cin >> number2;
        cout << "Result = " << number1 + number2;
        break;
    }
    case 2: {
        cout << "Enter number 1: ";
        cin >> number1;
        cout << "Enter number 2: ";
        cin >> number2;
        cout << "Result = " << number1 - number2;
        break;
    }
    case 3: {
        cout << "Enter number 1: ";
        cin >> number1;
        cout << "Enter number 2: ";
        cin >> number2;
        cout << "Result = " << number1 * number2;
        break;
    }
    case 4: {
        cout << "Enter number 1: ";
        cin >> number1;
        cout << "Enter number 2: ";
        cin >> number2;
        cout << "Result = " << number1 / number2;
        break;
    }
    default: {
        cout << "Exiting: You entered an invalid number."  << endl;
    }

    }

    return 0;

}
