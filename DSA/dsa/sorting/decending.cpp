#include <iostream>
#include <vector>
using namespace std;

void decending(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void ans(int arr[],int  n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n=5;
    int arr[]={3,4,1,2,5};

    decending(arr,n);
    ans(arr,n);
    return 0;
}