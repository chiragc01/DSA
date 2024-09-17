#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == min) {
            arr[i] = max;
        } else if (arr[i] == max) {
            arr[i] = min;
        }
    }
     cout << "Array after swapping min and max values: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
