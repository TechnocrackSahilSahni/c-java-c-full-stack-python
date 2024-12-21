#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=1;j<n-i-1;j++){
            cout<<" ";
        }
        //num1
        for(int k=0;k<=i+1;k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
