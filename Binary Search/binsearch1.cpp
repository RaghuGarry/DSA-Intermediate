//Binary search-->Given a sorted array and a target
//Simple example 
//Iterative-Recursive-O(logn)
//It array is sorted and wehave to search---> Binary Search
#include<bits/stdc++.h>
using namespace std;
int iterative(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(target>arr[mid]){
            low=mid+1;

        }
        if(target<arr[mid]){
            high=mid-1;
        }
    }
    return -1;
}
int find_tar(int arr[],int low,int high,int target){
    int mid=low+high/2;
    if(low>high) return -1;
    if(arr[mid]==target) return mid;
    if(target<arr[mid]) return find_tar(arr,low,mid-1,target);
    if(target>arr[mid]) return find_tar(arr,mid+1,high,target);


}
int recursion(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    return find_tar(arr,low,high,target);
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int req;
    cout<<"Enter the req ele: ";
    cin>>req;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    int ans=recursion(lit,size,req);
    cout<<ans;
}