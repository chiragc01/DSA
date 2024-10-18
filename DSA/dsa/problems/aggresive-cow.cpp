# include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;


bool ispossible(vector<int> arr,int n , int c, int minalloweddistance){ //0(n)
    int cows=1, laststalldis=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-laststalldis>=minalloweddistance){
            cows++;
            laststalldis=arr[i];
        }

        if(cows==c){
            return true;
        }
    }

    return false;
}

int getdistance(vector<int> &arr,int n , int c){    //nlog(n)

    sort(arr.begin(),arr.end());

    int st=1, end=arr[n-1]-arr[0] , ans=-1;    //   O(log(range))*N
    while(st<=end){
        int mid=st +(end-st)/2;
        if(ispossible(arr ,n,c,mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
        
        }
        return ans;

}

int main(){
    int n=5 , m=3;
    vector<int> arr={1,2,8,4,9};

    cout<<getdistance(arr,n,m);
    return 0;
}