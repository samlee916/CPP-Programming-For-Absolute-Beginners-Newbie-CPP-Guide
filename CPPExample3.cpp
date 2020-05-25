#include <iostream>

using namespace std;

int main() {

    string name = "Bob";
    int age = 23;
    //Bob is 23 years old.
    cout << name << " is " << age << " years old." << endl;

    string name1;
    cout << "Enter name: ";
    cin >> name1;
    cout << "You entered the name: " << name1 << endl;

    int age1;
    cout << "Enter age: ";
    cin >> age1;
    cout << "The person's age is " << age1 << endl;

    return 0;

}
