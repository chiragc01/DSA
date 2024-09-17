#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter no";
    cin>>n;
    int a=n & (n-1);
    if(a==0){
        cout<<"num is power of 2";
    }else{
        cout<<"num is not power of 2";
    }

    return 0;
}
