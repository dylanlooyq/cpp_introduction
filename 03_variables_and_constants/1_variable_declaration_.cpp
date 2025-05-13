/* C++ primitive types
- Integer
- Float
- Boolean
- Character */

#include <iostream>
using namespace std;

 main() {

   // uninitialized
    int age1;
    age1 = 21;
    
    // C-like initialization
    int age2 = 21;

    // Constructor initialization
    int age3 (21);

    // C++11 list initialization syntax
    int age4 {21};

   cout << "age1:" << age1 << endl;
   cout << "age2:" << age2 << endl;
   cout << "age3:" << age3 << endl;
   cout << "age4:" << age4 << endl;

   cout << "Press enter to continue..." << endl;
   cin.ignore();

 }