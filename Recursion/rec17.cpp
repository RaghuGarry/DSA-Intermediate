//return true if the subseq of target is there in the array
//else false
#include<bits/stdc++.h>
using namespace std;
bool subseq(int ind,int a,int sum,vector<int>&arr,int n){
    if(ind==n){
        if(a==sum){//comdition satisfied
            return true;
        }
        else {//condition not satisfied
            return false;
        }
    }
    if(subseq(ind+1,a+=arr[ind],sum,arr,n)==true){
        return true;
    }
    if(subseq(ind+1,a-=arr[ind],sum,arr,n)==true){
        return true;
    }
    return false;
}


int main(){
    vector<int>arr={3,1,5,8,7,2};
    int n=6;
    int target=118;
    cout<<subseq(0,0,target,arr,n);
}