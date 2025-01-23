//Upper bound
//The smallest index such that arr[ind]>x
#include<bits/stdc++.h>
using namespace std;
int upperBound(int arr[], int x, int n){
	// Write your code here.
	int low=0;
    int high=n-1;
    int lb=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            high=mid-1;
            lb=mid;
        }
		else{
			low=mid+1;

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