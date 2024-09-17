#include <iostream>
using namespace std;
int main(){
    int n=4;
    // int i=0,j=0;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // space 
        for( int j=0;j<=2*(n-i)-3;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout << endl;
    }
    for (int i = n-1; i >=0; i--) {

        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // space 
        for( int j=0;j<=2*(n-i)-3;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout << endl;
    }

    }
    