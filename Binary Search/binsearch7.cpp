//Search in an rotate array-->initial iput is normal sorted array
//Array of n elements all are unique after rotation at some random index unknown to u
//and we have to find the index of given target num

//Brute Force-->O(n)
//Do a lin search on the given array

//Optimal
#include<iostream>
using namespace std;
int optimal(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[low]<=arr[mid]){//Right sorted
            if(arr[low]<=k && k<=arr[mid]) high=mid-1;
            else low=mid+1;
        }
        else{//Left sorted
            if(arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }
            else high=mid-1;
        }
    }return -1;
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