#include <bits/stdc++.h>
using namespace std;
//print all the subsequences whose sume is k
void subseq(int ind,vector<int>&ds,int a,int sum,int arr[],int n){
    if(ind==n){
        if(a==sum){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }return;
    }
    ds.push_back(arr[ind]);
    a+=arr[ind];
    subseq(ind+1,ds,a,sum,arr,n);
    ds.pop_back();
    a-=arr[ind];
    subseq(ind+1,ds,a,sum,arr,n);
}

int main(){
    int arr[]={3,1,5,8,7,2};
    int n=6;
    int sum=8;
    vector <int> ds;
    subseq(0,ds,0,sum,arr,n);
}