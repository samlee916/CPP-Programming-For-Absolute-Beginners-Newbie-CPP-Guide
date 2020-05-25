#include <iostream>

using namespace std;

int main() {

    int run = 10;
    //while loop and prints out 10-0
    while (run >= 0) {
        cout << run << endl;
        run = run - 1;
    }

    //while loop and prints out 10-0
    int run1 = 10;
    do {
        cout << run1 << endl;
        run1 -= 1;
    } while(run1 >= 0);

    //for loop
    int value = 0;
    for(int index = 0; index < 10; index++) {
        cout << value << endl;
        value += 5;
    }

    return 0;

}
