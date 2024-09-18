#include <iostream>
using namespace std;
//leanear search

int leaanearsearch(int arr[], int size, int target ){
    for(int i=0;i<size;i++){
        if( arr[i] == target){
       return i;
    }
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,5,6,7,8,9,10};
    int size =  sizeof(arr) / sizeof(arr[0]);
    int target = 99;
    cout<<leaanearsearch(arr,size,target);

    return 0;
}
