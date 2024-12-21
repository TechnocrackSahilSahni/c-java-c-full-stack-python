#include<iostream>
using namespace std;
int DecToBin(int decimal){
    int ans=0,pow=1;
    while(decimal>0){
        int rem=decimal%2;
        decimal/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    int decimal;
    cout<<"enter a decimal number : ";
    cin>>decimal;
    for(int i=1;i<=decimal;i++){
        cout<<DecToBin(i)<<endl;
    }

    return 0;
}
