#include <iostream>
using namespace std;
int main(){
    int n; cout<<"Enter the size of hill: "; cin>>n; int A = 65;
    int c = A-1;
    for(int i=0; i<n; i++){
        int b=A; int d = c;
        for(int j=1; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<char(b);
            b++;
        }
        for(int j=0; j<i; j++){
            cout<<char(d);
            d--;
        }
        c++;
        cout<<endl;
    }
    return 0;
}