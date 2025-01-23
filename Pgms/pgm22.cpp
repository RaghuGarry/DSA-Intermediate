#include<iostream>
using namespace std;
void dosome(int arr[]){//passing the add of array
    arr[0]+=20;
}

int main(){
    int size;
    cin>>size;
    int v[size];
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    dosome(v);
    cout<<v[0];
}