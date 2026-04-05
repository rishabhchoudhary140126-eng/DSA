#include <iostream>
using namespace std;
int main(){
    int n = 0; cout<<"Enter size of pytamid: "; cin>>n;
    for(int i=0; i<n; i++){
        for(int j= 1; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n; i>0; i--){
        for(int j= 0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}