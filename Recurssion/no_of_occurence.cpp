#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {10,5,10,15,10,5};
    int k; k=sizeof(arr) / sizeof(int);
    int n; cout<<"Enter the no. whose occurence you want to check: "; cin>>n;
    unordered_map <int, int> um;
    for(int i=0; i<k; i++){
        um[arr[i]]++;
    }
    cout<<"No. of occurence of "<<n<<" is "<<um[n];
}