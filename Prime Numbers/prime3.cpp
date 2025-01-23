#include<bits/stdc++.h>
using namespace std;
//Seive of eratosthenes
//Precompute.. which number is prime
void seive(int n,vector<bool>&arr){
    for(int i=2;i<=n;i++){
        if(arr[i]==true){
            for(int j=2*i;j<=n;j+=i){
                arr[j]=false;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<bool>arr(n,true);
    seive(n,arr);
    int query;
    cin>>query;
    cout<<arr[query];
    //If the output is 1 ---> Prime
    //                 0 ----> Composite
}