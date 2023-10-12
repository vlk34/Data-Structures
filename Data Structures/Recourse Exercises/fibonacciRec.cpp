#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int n;
    cout << "Input a number: ";
    cin >> n;

    // Find the nth Fibonacci number using recursion
    int fibNum = fibonacci(n);

    cout << "The " << n << "th Fibonacci number is: " << fibNum << endl;

    return 0;
}

int fibonacci(int n) {

    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci (n - 2);
}