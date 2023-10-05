#include <iostream>

void swap(int &x, int &y) {
    int t;

    t = x;  // 1
    x = y;  // 1    Total 3 simple tasks, f(n) = 3; O(1), its constant
    y = t;  // 1
}

int sum(int A[], int n) {
    
    int i, s;
    s = 0;
    //   i = 0 (1), i < n (n+1), i++ (n) times, time taken is n+1
    for (int i = 0; i < n; i++) {
        s = s + A[i];   // n times
    }

    return s;   // 1 times     f(n) = 2n + 3  // degree is 1, (2n), so order = O(n)

}

void Add(int n) {
    int i, j;

    int A[3][3];
    int B[3][3];
    int C[3][3];

    for (int i = 0; i < n; i++) {   // n + 1
        
        for (int j = 0; j < n; j++) {   // n * (n + 1)

            C[i][j] = A[i][j] + B[i][j];    // n * n
        }
    }
}           // f(n) = (2n * 2n) + 2n + 1 (2n kare + 2n + 1) order = O(n * n)

int main() {

    int x, y;
    std::cin >> x >> y;
    swap(x, y);

    std::cout << x << " " << y << std::endl;
}