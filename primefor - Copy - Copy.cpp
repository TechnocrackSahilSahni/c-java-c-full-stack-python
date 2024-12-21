#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=2;i<=n-1||i*i<=n;i++){
        if(n%i==0){
            cout<<"this is non prime number";
            break;
        }else{
        cout<<"this is prime number";
        break;}
    }
    return 0;
}
