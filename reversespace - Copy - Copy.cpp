#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //number
        for(int k=0;k<n-i;k++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
   /* output:
        11111
         2222
          333
           44
            5*/
        }
