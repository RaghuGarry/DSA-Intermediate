//Find the first and last occurances of thearray
//arr=[2,4,6,8,8,8,11,13,15]
//if k=8 (3,5) if k=11 (6,6) if k=20 (-1,-1)


//Brute force-->O(n)
//make a linear search
//first and last =-1
//if arr[i]==k if first==-1 first=i 
//last=i
#include<bits/stdc++.h>
using namespace std;
void brute(int arr[],int n,int k){
    int first=-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            if(first==-1) first=i;
            last=i;
        }
    }cout<<first<<" "<<last;
}
//Optimal
int firstOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            first = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            last = mid;
            //look for larger index on the right
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return last;
}
int main(){
    int size,k;
    cout<<"Enter the size of the array";
    cin>>size;
    cout<<"Enter key element: ";
    cin>>k;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
}