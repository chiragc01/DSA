#include <iostream>
#include <vector>
using namespace std;


void printarray(int arr[],int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev =i-1;
        while(prev>=0&&arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

int main(){
    int n=10;
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    insertionsort(arr , n);
    printarray(arr ,n);

    return 0;
}