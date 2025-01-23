//Sort an array of 0's,1'sand 2's-->Dutch national flag
//Brute-->Sort ->TC-O(nlogn),SC->(n)


//Better-->TC->O(2n),SC->O(1)
//First run a loop and maintain 3 variable for count of 0,1,2
//and in this loop count the number of 0,1,2
//and take the array run a loop first appending 0
//then for loop for 1and for 2
//total 4 loops 
//Optimal
#include<iostream>
using namespace std;
void optimal(int arr[],int n){
    int i=0;
    int j=0;
    int k=n-1;
    int temp;
    int pivot=arr[0];
    while(j<k){
        if(arr[j]<pivot){
            temp=arr[i];
            arr[i]=arr[j];
            arr[i]=temp;
            i++;
            j++;
        }
        if(arr[j]>pivot){
            temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            k--;

        }
        if(arr[j]==pivot){
            j++;
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    optimal(lit,size);
}
