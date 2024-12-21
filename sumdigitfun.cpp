#include<iostream>
using namespace std;
int sum(int n){
    int di=0;
    while(n>0){

        int s=n%10;
        n=n/10;

        di+=s;
    }


    return di;

}
int main(){
    cout<<sum(763);
    return 0;

}
