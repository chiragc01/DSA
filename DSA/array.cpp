#include <iostream>
#include <climits>  // Include this header for INT_MAX

using namespace std;

int main() {
    int nums[] = {100, 29, 30, 99, 98};  // Array with 5 elements
    int size = sizeof(nums) / sizeof(nums[0]);  // Calculate size of the array

    int largest = nums[0];  // Initialize largest with maximum integer value

    for (int i = 0; i < size; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    cout << largest;

    return 0;
}
