#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int n;
    cout << "Insert n: ";
    cin >> n;

    int result = factorial(n);
    cout << result;
}

int factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}