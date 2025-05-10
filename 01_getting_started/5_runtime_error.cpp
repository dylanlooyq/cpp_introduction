// Sources of runtime errors:
// Divide by 0
// File not found
// Out of memory

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Check if the user is old enough to vote
    if (age <= 0) {
        cout << "Age cannot be negative!" << endl;
        return 0; // Return a non-zero value to indicate an error
    }

    cout << "Your age is: " << age << endl;

    // Check if the user can vote
    if (age <= 18) {
        cout << "You are not eligible to vote." << endl;
        return 0; // Return 0 to indicate success
    }

}