#include <bits/stdc++.h>
using namespace std;

int summ(int &n, int &sum, int i){
    if(i>n) return sum;
    sum = sum + i;
    summ(n, sum, i+1);
}

int main(){
    int n = 0; cout<<"Enter the value of N: "; cin>>n;
    int sum = 0;
    cout<<summ(n, sum, 0);

}