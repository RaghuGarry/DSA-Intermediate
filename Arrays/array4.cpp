//Remove Dulplicates from the sorted array-->in place
//Modify the given array --> donot take a new array
//Modify and return the number of unique elements
//NO of unique in the sense-->[1,1,2,2,2,3,3,4,4]--Unique elements(i)=4
//Modify in the sence-->We have to keep those i elements in the first i places and dont care what the rest of are
//--->[1,2,3,4, , , , ,]
//Brute Force--> Using Set Data Structure-->O(nlogn+n)
//Optimal--->O(n)
#include<iostream>
using namespace std;
int RemDup(int arr[],int size){//One Pass
    int i=0;
    for(int j=1;j<size;j++){
        if(arr[i]!=arr[j]){
            i+=1;
            arr[i]=arr[j];
        }

    }
    return i+1;

}

int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    int reult=RemDup(lit,size);
    cout<<reult;
}


