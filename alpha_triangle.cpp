#include <iostream>
using namespace std;
int main(){
    int n; cout<<"Enter the size of triangle: "; cin>>n; int A=64 + n;
    for(int i=0; i<n; i++){
        int b = A;
        for(int j=0; j<=i; j++){
            cout<<char(b)<<" ";
            b++;
        }
        A--;
        cout<<endl;
    }


    return 0;
}