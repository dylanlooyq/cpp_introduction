// #include <iostream>
// using namespace std;

// int main() {
//     cout << "hello from Project 1" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int favourite_number;
    cout << "Enter your favourite number between 1 and 100" << endl;
    cin >> favourite_number;
    cout << "Your favourite number is: " << favourite_number << endl;

    cout << "press any key to continue..." << endl;
    cin.ignore(); // Clear the newline character from the input buffer
    cin.get(); // Wait for user input

    return 0;
}