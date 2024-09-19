#include <iostream>
#include <vector>
using namespace std;
int main(){
    int ans =0;
    vector<int> vec={1,1,2,3,4,3,4};
    for(int val:vec){
        ans^=val;
    }
    cout<<ans;
    return ans;
}
    