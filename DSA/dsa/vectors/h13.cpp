#include <iostream>
#include <vector>
using namespace std;

// waf to reverse vector

int main(){
    vector<int> vac{1,2,3,4,5,6,7};
    int size = vac.size();
        for(int i=0;i < size/2;i++){
            swap(vac[i],vac[size-i-1]);

        }
    
    for(int val:vac){
        cout<<val<<" ";
    }
    return 0;
}
   