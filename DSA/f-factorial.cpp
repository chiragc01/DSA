#include <iostream>
using namespace std;
int factorial(int n){
    int z=1;
    for(int i=1;i<=n;i++){
        z=z*i;

    }
    return z;
}

int main(){
    cout<<factorial(5);
return 0;
    }
    