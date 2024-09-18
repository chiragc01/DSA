#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
   int sum=0;
   int product=1;
    for (int i = 0; i <size; i++) {
        if(i<size){
            sum=sum+arr[i];   
            product=product*arr[i]; }
    }
cout<<sum<<endl;
cout<<product;
   

    return 0;
}
