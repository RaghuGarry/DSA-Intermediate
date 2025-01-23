//2 Sum Problem-->Given an array and a target value
//DO they exist 2 ele a,b in the array such that a+b=target
//Brute force--TC-O(n^2)
//gives the dirst encountered a+b=target
#include<iostream>
using namespace std;
#include<algorithm>
void brute(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i]+arr[j]==target){
                cout<<"The a= "<<arr[i]<<" is in index "<<i<<endl
                <<"The b is "<<arr[j]<<" is in the index "<<j<<endl;
                return;
            }
        }
    }
    cout<<"There are no two such numbers";
    return;
}
//In this we are only checking the ele after i we are not travesing the entire list
//for every iteration 
void brute_two(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"The a= "<<arr[i]<<" is in index "<<i<<endl
                <<"The b is "<<arr[j]<<" is in the index "<<j<<endl;
                return;
            }
        }
    }
    cout<<"There are no two such numbers";
}
//Better --> Using hashing
//Optimal-->we have do sorting-->TC-O(nlogn+n(this n for travesing the array)),SC->O(1)
//Two pointer approach-->take 2 pointer 
//Sort the array
//one at the start and other at end-->if start+end=target-->return
//if start + end < target we will want and some big num --> start+1
//else end--
void optimal(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++){
        if(start<end){
            if(arr[start]+arr[end]==target){
            cout<<"The a= "<<arr[start]<<" is in index "<<start<<endl
            <<"The b is "<<arr[end]<<" is in the index "<<end<<endl;
            return;
            }
            else if(arr[start]+arr[end]<target){
                start++;
            }
            else if(arr[start]+arr[end]>target){
                end--;
            }
        }

    }
}

int main(){
    int n,k;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter the target sum: ";
    cin>>k;
    int lit[n];
    for(int i=0;i<n;i++){
        cin>>lit[i];
    }
    std::sort(lit, lit + n);

    optimal(lit,n,k);
}

