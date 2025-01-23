//Linear Search-->First occurance of the num
#include<iostream>
using namespace std;
void linsearch(int a[],int n,int target){
    for(int i=0;i<n;i++){
        if(a[i]==target){
            cout<<"The target was in "<<i;
            return;
        }

    }
    cout<<"Target was not found";
    return;
}

int main(){
    int size,target;
    cout<<"Enter the size of the array ";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    cout<<"Enter the target value: ";
    cin>>target;
    linsearch(lit,size,target);

}

