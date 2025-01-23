//Maximum Subarray Sum--> Subarray -->Contigious part of array
//Array contains both positive and negative elements
//Invoves Kadane's Algorithm
//Brute-->TC-O(n^2)
#include<iostream>
using namespace std;
int brute(int arr[],int n){
    int largest=INT16_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            largest=max(sum,largest);

        }
    }return largest;
}
//Optimal--Kadan's Algo
//when we encountered with a sum<0 the make sum=0
//and move forward
int optimal(int arr[],int n){
    int large=INT16_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>large){
            large=max(sum,large);
        }
        if(sum<0){
            sum=0;
        }
    }return large;
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    int ans=brute(lit,size);
    cout<<ans;
}