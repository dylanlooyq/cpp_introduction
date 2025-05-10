// Create a C++ program that asks the user for their
// favourite number between 1 and 100
// Suppose the user enters 24
// Then display the following message:
// "Amazing!! That's my favourite number too!!"
// "No really!! 24 is my favourite number!!"

#include <iostream>
using namespace std;

int main() {
    int favourite_number;
    cout << "Enter your favourite number" << endl;
    cin >> favourite_number;

    if (favourite_number < 1 || favourite_number > 100) {
        cout << "Amazing!! That's my favourite number too!!" << endl;
        cout << "No really!! " << favourite_number << " is my favourite number!!" << endl;
        return 0; // Return a non-zero value to indicate an error
    }

    if (favourite_number) {

    }

    cout << "press enter to continue..." << endl;
    cin.ignore();
    cin.get();
}