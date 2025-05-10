// Create a C++ program that asks the user for their
// favourite number between 1 and 100
// Suppose the user enters 24
// Then display the following message:
// "Amazing!! That's my favourite number too!!"
// "No really!! 24 is my favourite number!!"


//// VERSION 1 WITH NO TIME ELAPSED ////
// #include <iostream>
// using namespace std;

// int main() {
//     int favourite_number;
//     cout << "Enter your favourite number" << endl;
//     cin >> favourite_number;

//     if (favourite_number >= 1 && favourite_number <= 100) {
//         cout << "Amazing!! That's my favourite number too!!" << endl;
//         cout << "No really!! " << favourite_number << " is my favourite number!!" << endl;
//     }

//     else {
//         cout << "Please enter a number between 1 and 100" << endl;
//     }

//     cout << "press enter to continue..." << endl;
//     cin.ignore();
//     cin.get();
// }

//// VERSION 2 WITH TIME ELAPSED ////
#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;
using namespace chrono;

int main() {
    auto start = high_resolution_clock::now();

    while (true) {
        int favourite_number;
        cout << "Enter your favourite number" << endl;
        cin >> favourite_number;

        if (favourite_number >= 1 && favourite_number <= 100) {
            cout << "Amazing!! That's my favourite number too!!" << endl;
            cout << "No really!! " << favourite_number << " is my favourite number!!" << endl;
            break;
            }

        else {
            cout << "Please enter a number between 1 and 100" << endl;
            break;
            }
    };

    auto end = high_resolution_clock::now();
    duration <double> elapsed = end - start;
    double elapsed_rounded = round(elapsed.count()*100)/100;
    cout << "Time elapsed: " << elapsed_rounded << " seconds" << endl;

    cout << "press enter to continue..." << endl;
    cin.ignore();
    cin.get();
}