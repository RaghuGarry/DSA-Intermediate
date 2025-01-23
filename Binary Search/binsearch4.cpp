//Search the insert position
//given an sorted array n and a num return the ind of the num it is present
//or retuen the index of the num where it has to be there maintain the sorted order
//HINT--> Use Lower Bound
#include<bits/stdc++.h>
using namespace std;
int insert_position(int arr[],int n,int m){
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]<m){
			low=mid+1;
		}
		if(arr[mid]>m){
			high=mid-1;
		}
		if(arr[mid]==m){
			return mid;
		}
	}
	return low;

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