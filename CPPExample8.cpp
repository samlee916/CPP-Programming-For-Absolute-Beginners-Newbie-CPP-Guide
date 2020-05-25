#include <iostream>
#include <fstream>

using namespace std;

int main() {

    //an array
    string groceryList[3] = {"bananas", "apples", "oranges"};
    for(int index = 0; index < 3; index++) {
        //output oranges instead of apples because the index starts at 0
        cout << groceryList[2] << endl;
        //prints out the groceryList items
        cout << groceryList[index] << endl;
    }

    //an alternative way
    const int SIZE = 4;
    string foodList[SIZE] = {"bananas", "apples", "oranges", "kiwis"};

    //creating and writing to a file
    ofstream outputFile("C:\\Users\\slee5\\Desktop\\C++ Programming For Absolute Beginners Newbie C++ Guide\\CPPExample8.txt");
    //if file does not exist print error message
    if(!outputFile) {
        cout << "The file could not be found." << endl;
        return -5;
    } else {
        string str = "A random txt file.";
        outputFile << str;
    }

    return 0;

}
