#include <bits/stdc++.h>
using namespace std;

void arrrev(int arr[], int n, int i){
    if(i > int(n/2)) return;
    swap(arr[i], arr[n-1-i]);
    arrrev(arr, n, i+1);
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    arrrev(arr, n, 0);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}