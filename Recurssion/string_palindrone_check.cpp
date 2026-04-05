#include <bits/stdc++.h>
using namespace std;
void palindrome(string s, int i, bool &k){
    if(i>= int(s.size()) || k == false) return;
    if(s[i] != s[s.size()-1-i]){
        k = false;
        return;
    }
    palindrome(s, i+1, k);
}

int main(){
    string s = "asdfghgfdsa";
    int i=0;
    bool k = true;
    palindrome(s,i,k);
    if(k==false) cout<<"String is not palindrome";
    else cout<<"String is a palindrome";
}