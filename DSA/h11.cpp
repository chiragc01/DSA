#include <iostream>
using namespace std;

//to find intersectuion two arrays


int main() {
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7};
int size1 = sizeof(arr1) / sizeof(arr1[0]);
int size2 = sizeof(arr2) / sizeof(arr2[0]);
int arr[size1];
  int commonSize = 0;

    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
        if(arr1[i]==arr2[j]){
            arr[commonSize++]=arr1[i];
        }
    }
    }
for(int i=0;i<commonSize;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}

