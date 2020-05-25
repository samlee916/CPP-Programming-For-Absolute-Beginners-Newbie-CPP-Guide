#include <iostream>

using namespace std;
void printAge(int &);
void changeAddress(string &);

//pass by reference example
int main() {

    int age = 7;
    printAge(age);
    cout << endl << age << endl;

    string myAddress = "2345 Willow Road";
    cout << "Address before function call: " << myAddress << endl;
    changeAddress(myAddress);
    //prints out 1400 College Town Drive
    cout << "Address after function call: " << myAddress << endl;

    return 0;

}

void printAge(int &x) {
    x = 5;
    cout << x;
}

void changeAddress(string &address) {
    address = "1400 College Town Drive";
}
