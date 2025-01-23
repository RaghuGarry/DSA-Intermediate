//Find the missing number in an array
//given an number N=5 and an array containing N-1 elements
//in the array contains N-1 it contains 1 to N but one is missing 
//N=5; [1,2,4,5]-->missing num is 3

//Brute Force--> TC=O(n^2),SC=O(1)
//Take each number in 1 to N
//For each num go through the entier array--> if the num is there OK
//if not return the num
#include<iostream>
using namespace std;
int brute(int arr[],int N){
    for(int i=1;i<=N;i++){
        int temp=0;
        for(int j=0;j<N-1;j++){
            if(arr[j]==i){
                temp=1;
                break;//after hitting break it goes to line 21
                //goes out of the current for loop
            }
            
        }
        if(temp==0){
            return i;
        }

    }
}
//Better Solution-->Use Hashing
//TC-O(n);SC-(n)

//Optimal-->TC-O(n)
//if n is given computer the sum first n natural num--> S1=n(n+1)/2
//and sub from the sum wheren this sum is obtained by addig all the int from the givrn array->S2=Add all the ele in array
//gives the missing number  Missing num=S1-S2
int optimal(int arr[],int n){
    int original=n*(n+1)/2;
    int obtained=0;
    for(int i=0;i<n-1;i++){
        obtained+=arr[i];
    }
    int sol=original-obtained;
}


int main(){
    int N,size;
    cout<<"Enter N: ";
    cin>>N;
    size=N-1;

    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }

    int result=brute(lit,N);
    cout<<result;

}

