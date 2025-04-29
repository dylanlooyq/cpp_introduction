 // Take input from the user and print the sum of two numbers


#include <iostream>
using namespace std;

int main() {
    int first_num;
    int second_num;
    cout << "Enter first number:" << endl;
    cin >> first_num;
    cout << "Enter second number:" << endl;
    cin >> second_num;
    int sum = first_num + second_num;
    cout << "The sum of " << first_num << " and " << second_num << " is: " << sum << endl;

    cout << "press any key to continue..." << endl;
    cin.ignore();
    cin.get();
    return 0;
}