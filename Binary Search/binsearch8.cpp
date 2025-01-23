//Find the mini in the rotated sorted array
//After rotation the array need not be sorted 
//[4,5,6,0,1,2,3]--> Ans=0

//Brute Force
//Do linear search

//Optimal
//Identify the sorted half
//TAke the mini ele from it store it
//and go for the other half and get the another mini and 
//compare with existing mini and if new is minimum then swap
#include<bits/stdc++.h>
using namespace std;
int findMin(int arr[],int n)
{
	int low=0;
	int high=n-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]<arr[high]){
			ans=min(arr[mid],ans);
			high=mid-1;
		}
		else{
			ans=min(arr[mid],ans);
			low=mid+1;
		}

	}return ans;

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