#include<iostream>
using namespace std;
int main(){
    int size=5,i,idx;
    int array[size]={12,23,45,21,-4};

    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(array[i]<smallest){
        smallest=array[i];
        idx=i;
        }
       // smallest=min(array[i],smallest);
    }
    cout<<"smallest = "<<smallest<<endl;
    cout<<"idx ="<<idx<<endl;
    return 0;
}
/*int main(){
    int size=6;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>largest){
            largest=array[i];
        }
        largest=max(array[i],largest);
    }
    cout<<"largest = "<<largest<<endl;
    return 0;
}*/
