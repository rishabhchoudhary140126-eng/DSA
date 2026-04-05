#include <iostream>
using namespace std;
int main(){
    int n, a; cout<<"Enter size of triangle: "; cin>>n; a = 65;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(a+j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}