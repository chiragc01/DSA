#include <iostream>
using namespace std;

int dectobin(int decnum){
    int ans =0, pov=1;
    while(decnum>0){
        int rem=decnum%2;
        decnum=decnum/2;
        ans+=(rem*pov);
        pov *=10;
    }
    return ans;
}

int main(){
    int decnum=50;
    cout<< dectobin(decnum)<<endl;
    return 0;
}

 