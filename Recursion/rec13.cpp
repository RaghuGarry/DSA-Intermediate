#include <bits/stdc++.h>
using namespace std;
//print only 1 of the subsequences whose sume is k
bool subseq(int ind,vector<int>&ds,int a,int sum,int arr[],int n){
    if(ind==n){
        if(a==sum){//comdition satisfied
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else {//condition not satisfied
            return false;
        }
    }
    ds.push_back(arr[ind]);
    if(subseq(ind+1,ds,a+=arr[ind],sum,arr,n)==true){
        return true;
    }
    ds.pop_back();
    if(subseq(ind+1,ds,a-=arr[ind],sum,arr,n)==true){
        return true;
    }
    return false;
}

int main(){
    int arr[]={3,1,5,8,7,2};
    int n=6;
    int sum=8;
    vector <int> ds;
    subseq(0,ds,0,sum,arr,n);
}