//Find out how many times the array is rotated
//[6,7,1,2,3,4,5]--2 times
//We can see this as the index as the smallest ele
//The index where the smallest is that num of times the array was rotate
#include<bits/stdc++.h>
using namespace std;
int findrotations(int arr[],int n)
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