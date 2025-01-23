//Left roatte the array by one bit and inplace
//[10,20,30,40,50]-->[20,30,40,50,10]
//First ele has to go last
//Optimal-->O(n)
//can also use xor
#include<iostream>
using namespace std;
void rotone(int arr[],int size){
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;

}
int main(){
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    rotone(lit,size);
    for(int j=0;j<size;j++){
        cout<<lit[j]<<" ";
    }

}
