//Find the single element in a sorted array
//Where aall the elements are occured twice  except only one
//Find that one element

//brute force
//for every ele find the left and of it and right of it if any both are not eqaul to
//present num return it
#include<bits/stdc++.h>
using namespace std;
int brute(int arr[],int n){
	int low=0;
	int high=n-1;
	int mid;
    if(n==1) return arr[0];//if the array has 1 ele
	for(int i=0;i<n;i++){
		if(i==0){//if the i= it do not have a left ele
			if(arr[i]!=arr[i+1]) return arr[i];
		}
		else if(i==n-1){//if the i= it do not have a left ele
			if(arr[i]!=arr[i-1]) return arr[i];
		}
        else{//for ele that are not firt and last
		if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]) return arr[i];//if left and right 
        //both are not equal it implies the occurance of the partocular ele is one
        }
	}
} 

//Optimse
int optimse(int arr[],int n)
{
	int low=1;
	int high=n-2;
	if(arr[low-1]!=arr[low]) return arr[0];
	if(arr[high]!=arr[high+1]) return arr[n-1];
	while(low<=high){
	int mid=(low+high)/2;
	if(arr[mid]!=arr[mid-1] && arr[mid]!= arr[mid+1]){
		return arr[mid];
	}
	if((mid%2!=0 && arr[mid-1]==arr[mid]) or (mid%2==0 && arr[mid]==arr[mid+1])){
		low=mid+1;
	}
	else high=mid-1;

}
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
