#include <iostream>
using namespace std;

int main(){
    int n; cout<<"Enter size: "; cin>>n;
    bool k = false;
    for(int i=0; i>=0;){
        for(int j=0; j<=i; j++){
                cout<<"*";
           }
            cout<<endl;
          if(i==n){
                k = true;
           }
          if(k==false){
               i++;
           }
           else{
              i--;
          }
   }
    return 0;
}