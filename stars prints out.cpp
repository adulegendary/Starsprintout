#include <iostream>
#include <cmath>
using namespace std;

void printOut(int number) {
    string stars = "*";
    for (int index = 0; index <= number; index++) {
        for (int counter = 0; counter < pow(2, index); counter++) {
            if (index == 0 && counter == pow(2, index)) {
                counter++;
            }
            cout << stars;

        }
        cout << endl;
        /*
        Now lets get decrease the number of starts to 0.\
        we need nested loop .\

        */
    }
    for (int index = 1; index <= number; index++) {
        for (int counter = 0; counter < pow(2, number - index); counter++) {
            cout << stars;
        }
        cout << endl;

    }
}

// lets declare to main function
int main() {
    int number;
    cout << "put your number here" << endl;
    cin >> number;
    printOut(number);

}
//print out rhe stars