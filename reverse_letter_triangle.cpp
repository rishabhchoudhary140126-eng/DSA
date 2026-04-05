#include <iostream>
using namespace std;
int main(){
    int n; cout<<"Enter the size of triangle: "; cin>>n; int a=65;
    for(int i=0; i<n; i++){
        int k=a;
        for(int j=0; j<n-i; j++){
            cout<<char(k)<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}