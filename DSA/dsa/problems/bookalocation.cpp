#include <iostream>
#include<vector>
using namespace std ;

bool isvalid( vector<int> &arr,int n, int m , int maxaloowedpages){
    int students=1, pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxaloowedpages){
            return false;
        }

        if(pages +arr[i] <=maxaloowedpages){
            pages+=arr[i];
        }else{
            students++;
            pages+=arr[i];
        }
    }
    return students >m ?false :true;
}


int allocatebooks( vector <int> &arr ,int n ,int m){

    if(m>n){
        return -1;
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1;
    int st=0,end=sum;    // range of posstible ans

    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid)){    // goes left
            ans=mid;
            end=mid-1;
        }else{                      // gores right
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={2,1,3,4};
    int n=4,m=2;

    cout<<allocatebooks(arr,n,m)<<endl;
    return 0;
}
