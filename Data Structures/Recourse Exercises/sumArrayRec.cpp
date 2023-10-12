#include <iostream>
using namespace std;

int sumArray(int a[], int size);

int main() {
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(nums) / sizeof(nums[0]);

    int sum = sumArray(nums, size);

    for (auto& x:nums) {
        cout << x << " "; 
    }
    cout << "\n";
    cout << sum << endl;
}

int sumArray(int nums[], int size) {

    if (size == 0) {
        return 0;
    }

    return nums[size - 1] + sumArray(nums, size - 1);
}
