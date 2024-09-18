#include <iostream>
using namespace std;
int main(){
    int n ;
    int factorial=1;
    cout<<"enter the vlaue of n =>";
    cin>>n;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<"factorial of n is =>"<< factorial;
}