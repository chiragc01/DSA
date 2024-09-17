#include <iostream>
using namespace std;

int bintodec(int binum){
    int ans =0, pov=1;
    while(binum>0){
        int rem=binum%10;
        ans+=(rem*pov);
        binum=binum/10;
        pov *=2;
    }
    return ans;
}

int main(){
    int binum=1010;
    cout<< bintodec(binum)<<endl;
    return 0;
}
