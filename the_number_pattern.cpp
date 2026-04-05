#include <iostream>
using namespace std;
int main(){
    int n; cout<<"Enter size of pattern: "; cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<n-j<<" ";
        }
        for(int j=1; j<n-i; j++){
            cout<<n-i<<" ";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<n-i<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<n-i+j+1<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<n-j<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<1+i<<" ";
        }

        for(int j=1; j<i;j++){
            cout<<1+i<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<1+i+j<<" ";
        }

        cout<<endl;
    }

    return 0;
}