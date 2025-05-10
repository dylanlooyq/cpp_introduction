// #include <iostream>
// using namespace std;

// // There are 90 keywords in C++


// int main() {

//     int fav_num;
//     cout << "Enter your favourite number" << endl;
//     cin >> fav_num;
//     cout << "Your fav number is:" << fav_num << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

main () {
    int data1;
    double data2;

    cout << "Give me 2 numbers" << endl;
    cin >> data1 >> data2;
    cout << "First number is: " << data1 << endl;
    cout << "Second number is: " << data2 << endl;

    double data3 = data1 + data2;
    cout << "The sum is " << data3 << endl;

    cout << "Press enter to continue..." << endl;
    cin.ignore();
    cin.get();
}
