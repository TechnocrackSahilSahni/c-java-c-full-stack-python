#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number : ";
cin>>n;
int i=2;
while(i<=n-1){
    if(n%i==0){
        cout<<"this is non prime number";
        return 0;
    }
    else
        i+=1;
}
cout<<"this is prime number ";
return 0;
}
