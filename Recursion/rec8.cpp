#include <bits/stdc++.h>
using namespace std;
//reverse an array
void fun(int i,int j,int a[]){
    if(i>=j) return;
    swap(a[i],a[j]);
    fun(i+1,j-1,a);
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    fun(0,size-1,arr);
    for(int j=0;j<size;j++) cout<<arr[j];
}