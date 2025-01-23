//Maximum Consecutive 1's in the given array
//[1,1,0,1,1,1,0,1,1]-->3
//if not return the num
#include<iostream>
using namespace std;
int concesone(int arr[],int n){
    int longest=0;
    int temp=0; 
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            temp++;
            longest=max(longest,temp);
        }
        else{
            temp=0;
        }
    }
    return longest;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int lit[n];
    for(int i=0;i<n;i++){
        cin>>lit[i];
    }

    int result=concesone(lit,n);
    cout<<result;

}

