#include <iostream>
using namespace std;

main () {

    int length;
    cout << "Enter the length" << endl;
    cin >> length;
    cout << "\n";

    int breadth;
    cout << "Enter the breadth" << endl;
    cin >> breadth;
    cout << "\n";

    int area = length * breadth;

    cout << "area = " << area << endl << "\n"; 

    cout << "press enter to continue..." << endl;
    cin.ignore();
    cin.get();

}
