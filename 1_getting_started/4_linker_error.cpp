#include <iostream>

extern int x;

int main() {
    std::cout << "The value of x is: " << x << std::endl;
    return 0;
}

// This code will not compile because the variable 'x' is declared but not defined.