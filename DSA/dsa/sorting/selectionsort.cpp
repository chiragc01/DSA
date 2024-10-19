#include <iostream>
#include <vector>
using namespace std;


void printarray(int arr[],int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                
                smallest=j;
            }
            swap(arr[i],arr[smallest]);
        }
        
    }
}

int main(){
    int n=10;
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    selectionsort(arr , n);
    printarray(arr ,n);

    return 0;
}