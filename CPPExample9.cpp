#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    //inputting to a file
    const int SIZE = 6;
    string namesList[SIZE] = {""};
    string tempName;
    ifstream inputFile("C:\\Users\\slee5\\Desktop\\C++ Programming For Absolute Beginners Newbie C++ Guide\\CPPExample9.txt");
    if(!inputFile) {
        cout << "File is not found" << endl;
        return -6;
    }
    int index = 0;
    //pre-read
    inputFile >> tempName;
    //until the end of the file
    while(!inputFile.eof()) {
        namesList[index] = tempName;
        index++;

        //post-read
        inputFile >> tempName;
    }

    for(int i = 0; i < SIZE; i++) {
        cout << namesList[i] << endl;
    }

    //special characters
    cout << "This is a tab character: \t\tTAB\n\n";
    cout << "This is a quote: " << "\"Quote\"\n\n";

    //manipulation
    cout << left << setprecision(2) << fixed;
    double dub = 201.214;
    cout << dub;
    int val = 227;
    cout << setw(25) << dub << setw(25) << val << endl;

    return 0;

}
