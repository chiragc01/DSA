#include <iostream>
#include <vector>
using namespace std;

// find the max - subarray sum by Kadan's algoirithm !!

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxsum=0;
    int currentsum =0;
    for(int i=0;i<n;i++){
        
        currentsum+=arr[i];
        maxsum=max(currentsum,maxsum);
        if(currentsum<0){
            currentsum==0;
        }
        

    }
    
    cout<<"value of max sub array sum is ::"<<maxsum;
    return 0;
}
   