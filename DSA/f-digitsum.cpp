#include <iostream>
using namespace std;

int digitsum(int num){
    int sum=0;
    while(num>0){
        int lastdig =num%10;
        num/=10;
        sum+=lastdig;
        
    }
    return sum;
}

int main(){
    cout<<digitsum(1234);
    return 0;

    }
    