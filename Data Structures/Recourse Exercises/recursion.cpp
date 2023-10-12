#include <iostream>

void fun(int n) {

    if (n > 0) {
        fun(n-1);   // Head Recursion, does stuff while returning, 
        std::cout << n; // can't be converted into a loop easily, they wouldn't look the same
}

int fun2(int n) {
    static int x = 0;

    if (n > 0) {
        x++;        
        return fun2(n-1) + x;    // Tail Recursion, its better to use a loop because of space complexlity.
    }                           // tail recursion takes n space, loops take O(1) constant.

    return 0;
}

int main() {
    int x = 3;
    fun(x);

    std::cout << "\n";

    int A = fun2(5);
    std::cout << A << std::endl;

    return 0;
}