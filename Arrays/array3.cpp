//check if the array is sorted or not
//non decending order
//A single way exists--> No Brute Better Optimal Soln
#include<iostream>
using namespace std;
void Checksort(int arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){//O(n)
           //Do Nothing
        }
        else{
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
    return;
}


int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    Checksort(lit,size);
}