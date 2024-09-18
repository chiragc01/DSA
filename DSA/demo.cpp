#include<iostream>
using namespace std;

int unique(int arr[],int size){
int unique=arr[0];
for(int i=1;i<=size ;i++){
if(arr[i]==unique){
break;
}
if(arr[i!=unique]){
cout<<unique;
}
}

}

int main()
{
int arr[]={1,1,2,3,3,4};
int size =sizeof(arr)/sizeof(arr[0]);

    cout << unique(arr[],size) << endl;
    return 0;
}