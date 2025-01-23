#include<bits/stdc++.h>
using namespace std;
//Lower bound to given num x
//The smallest index such that arr[ind]>=x
int iterative(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int lb=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<target){
            low=mid+1;
            lb=mid;
        }
        if(arr[mid]>=target){
            high=mid-1;
            lb=mid;
        }
    }return lb;
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
}