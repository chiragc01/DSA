#include <iostream>
#include <vector>
using namespace std;

// linear search vector

int main(){
    int num;
    vector<int> vec={1,2,3,4,5,6,7,};
    cout<<"choose the no from 1,2,3,4,5,6,7::";
    cin>>num;
    for(int val:vec){
        if(num==val){
            cout<<num;
        }
    }
    
}
   