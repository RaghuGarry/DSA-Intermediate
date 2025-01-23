//Find the one number in array which is appearing only once 
//where all the remaning num will appearing 2 times
//[1,1,2,2,3,4,4]-->3
#include<iostream>
using namespace std;
//Brute --O(n^2)
//Take each ele in thae array and maintain a counter 
//after searching the entire array for one num if the counter is still 1 then return the num
int brute(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        int num=arr[i];
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count==1){
            return num;
        }
    }
}


//Better Soln--> Use Hashing
//Optimal--> Similar to array11 pblm
int optimal(int arr[],int n){
    int x=arr[n-1];
    int original=x*(x+1);
    int obtained=0;
    for(int i=0;i<n;i++){
        obtained+=arr[i];
    }
    int sol=original-obtained;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int lit[n];
    for(int i=0;i<n;i++){
        cin>>lit[i];
    }

    int result=optimal(lit,n);
    cout<<result;

}