#include <iostream>

using namespace std;

int main() {

    int num1 = 3;
    int num2 = 6;
    int result = num1 + num2;
    cout << result << endl;
    //prints out 3 because 9 - 6 = 3
    cout << (num1 + num2) - 6 << endl;

    int result1 = num2 % num1;
    //result 1 is 0 because there is no remainder of 6/3
    cout << result1 << endl;

    //string concatenation
    string firstName = "Bob ";
    string lastName = "Lot";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    return 0;

}
