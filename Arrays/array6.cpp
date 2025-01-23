//Left rotating the array by k bits
//k=2-->[10,20,30,40,50,60]-->[30,40,50,60,10,20]
//k=Size of the array that is number of ele in array-->Becomes the given array
//k>size of array-->size of array+(int which is less than size of array(h))
//Its is good as rotating by h bits
//d=d%(size of array)

//Brute Force-->O(n^2)
#include<iostream>
using namespace std;
void brute(int arr[],int n,int k){
    k=k%n;
    for(int i=1;i<=k;i++){
        int temp=arr[0];
        for(int j=1;j<n;j++){
            arr[j-1]=arr[j];
        }
        arr[n-1]=temp;
        }
    }

//better-->O(n+d),SC-->O(d)
void better(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0; i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }

    }

//Optimal-->TC=O(2n);SC(1)
//Needs observation---[1,2,3,4,5,6,7]--k=3-->[4,5,6,7,1,2,3]
//Step-1: Take first k num and reverse them---[3,2,1,4,5,6,7]
//Step-2: Take the k+1 to n elements and reverse them--[3,2,1,7,6,5,4]
//Step-3: Then again reverse the entire array---[4,5,6,7,1,2,3]
void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}
void optimal(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    
}

int main(){
    int size,k;
    cout<<"Enter the size of the array ";
    cin>>size;
    cout<<"Enter the number of rotations ";
    cin>>k;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    better(lit,size,k);
    for(int j=0;j<size;j++){
        cout<<lit[j]<<" ";
    }

}
