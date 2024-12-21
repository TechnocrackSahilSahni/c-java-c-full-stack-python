#include<iostream>
using namespace std;
int BinToDec(int binary){
    int ans=0,pow=1;
    while(binary>0){
        int rem=binary%10;
        binary/=10;
        ans=ans+(rem*pow);
        pow=pow*2;
    }
    return ans;
}
int main(){
    cout<<BinToDec(101010);
    return 0;
}
