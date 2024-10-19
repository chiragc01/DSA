#include <iostream>
#include <vector>
using namespace std;

void bubblesor(int arr[] , int n){    // o(n^2)

    for(int i=0;i<n-1;i++){
        bool isswap= false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap){
            return;
        }
    }
}

void printarray(int arr[],int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=10;
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    bubblesor(arr , n);
    printarray(arr ,n);

    return 0;
}