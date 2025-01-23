#include <bits/stdc++.h>
using namespace std;
//print the count of subsequences whose sume is k
int subseq(int ind,vector<int>&ds,int a,int sum,int arr[],int n){
    if(ind==n){
        if(a==sum)return 1;
        else return 0;
    }
    ds.push_back(arr[ind]);
    a+=arr[ind];
    int l= subseq(ind+1,ds,a,sum,arr,n);
    ds.pop_back();
    a-=arr[ind];
    int r= subseq(ind+1,ds,a,sum,arr,n);
    return l+r;
}

int main(){
    int arr[]={3,1,5,8,7,2};
    int n=6;
    int sum=8;
    vector <int> ds;
    cout<<subseq(0,ds,0,sum,arr,n);
}