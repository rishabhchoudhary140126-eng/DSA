#include <iostream>
using namespace std;
int main(){
    int n; cout<<"Enter the size of triangle: "; cin>>n; int A = 65;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(A)<<" ";
        }
        A++;
        cout<<endl;
    }

    return 0;
}