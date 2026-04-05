#include <bits/stdc++.h>
using namespace std;

void print(int n, int k){
    if(k>n) return;
    cout<<k<<endl;
    k++;
    print(n,k);
}

int main(){
    int n = 0;
    int k = 1;
    cout<<"Enter the value of N: "; cin>>n;
    print(n,k);
}