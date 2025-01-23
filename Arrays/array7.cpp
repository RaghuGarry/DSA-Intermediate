//Move all zeros to the end of the array
//Brute Force-->TC=O(2n);SC=O(n)
//Take a new array and for each non zero ele in given array
//store the ele in new array,and after that copy all the elemnets to the given array
//and for the remaing spaces fill zero

//Optimal-->TC=O(n);SC=O(1)
#include<iostream>
using namespace std;
void optimal(int arr[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;//Finding the first 0 index
            break;
        }
    }
    for(int h=j+1;h<n;h++){
        if(arr[h]!=0){
        swap(arr[h],arr[j]);
        j++;
        }
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
    for(int j=0;j<size;j++){
        cout<<lit[j]<<" ";
    }

}
