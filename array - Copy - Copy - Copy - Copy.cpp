#include<iostream>
using namespace std;
int main(){
    int n=5;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;

    }
    cout<<sizeof(array)/sizeof(int);
    return 0;
}
