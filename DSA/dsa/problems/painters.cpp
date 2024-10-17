# include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &arr,int n,int m,int maxvalue){
    int man=1 , paint=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxvalue){
            return false;
        }
    }
    for(int i=0;i<n;i++){
        if(paint+arr[i]<=maxvalue){
            paint+=arr[i];
        }else{
            man++;
            paint=arr[i];
        }
    }
    return man>m?false:true;
}
int paint(vector<int> &arr,int n , int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1;
    int st=0,end=sum;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector <int> arr={40,30,10,20};
    int n=4 ,m=2;
    cout<<paint(arr,n,m)<<endl;
    return 0;
}