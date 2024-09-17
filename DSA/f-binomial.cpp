#include <iostream>
using namespace std;

int fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int ncr(int n,int r){
int factn=fact(n);
int factr=fact(r);
int factnmr=fact(n-r);

 return factn / (factr*factnmr);
}

int main(){
    int n=8,r=2;
    cout<<ncr(n,r);
    return 0;
    }
    