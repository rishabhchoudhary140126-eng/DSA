#include <iostream>
using namespace std;
int main(){
    int n; cout<<"Enter the size of triangle: "; cin>>n; bool a = true;
    for(int i=0; i<n; i++){
        int k = a;
        for(int j=0; j<=i; j++){
            cout<<k;
            k = not(k);
        }
        a= not(a);
        cout<<endl;
    }
    return 0;
}