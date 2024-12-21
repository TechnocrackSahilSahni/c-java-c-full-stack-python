#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;

        }
       /* if(i==5){
            break;
        }*/
    }
    cout<<sum<<endl;
    return 0;
}
