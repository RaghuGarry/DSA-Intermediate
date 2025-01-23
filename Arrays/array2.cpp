//Finding the second largest element in array
//Brute Force-->Sort the array and come from the last and see where the num which is not equal to the last num-->O(nlogn+n)
//Better Approach
#include<iostream>
using namespace std;
void better(int arr[],int a){
    int first=arr[0];
	int answer=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]>first){
            first=arr[i];//after all the iteration first has thae largest element--->O(n)
        }
    }
	for(int j=0;j<a;j++){
		if(arr[j]>answer&&arr[j]!=first){
			answer=arr[j];//after all the lteration second largest element--->O(n) 
		}
	}
	cout<<answer;


}
//Optimal-->O(n)
void optimal(int arr[],int n){
	int first=arr[0];
	int second=-1;//initially okay... when we have largest and we came accross a num>largest then
	//largest=num and second=largest
	//num<largest but num>second-->second=num
	for(int i=1;i<n;i++){
		if(arr[i]>first){
			second=first;
			first=arr[i];
		}
		else if(arr[i]<first&&arr[i]>second){//**Important line
			second=arr[i];

		}
	}//In only one parse-->O(n)
	cout<<second;
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    optimal(lit,size);
}