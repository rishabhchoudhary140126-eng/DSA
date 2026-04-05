#include <bits/stdc++.h>
using namespace std;

int factoril(int n){
    if(n==1) return 1;

    return n * factoril(n-1);
}
int main(){
    int n = 0; cout<<"Enter the value of N: "; cin>>n;
    cout<<factoril(n);


}