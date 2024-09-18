#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5, -9, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest = arr[0];
    int smallestIndex = 0; // Initialize with the index of the first element

    // Iterate through the array to find the smallest element and its index
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }

    // Print the index of the smallest element
    cout << "Index of the smallest element: " << smallestIndex << endl;

    return 0;
}
