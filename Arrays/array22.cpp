//Find the leader of the array
//A leader is an element has all the elements to the right of it is less than it
//[10,22,12,3,0,6]--> leadrer =22,12,6

#include<bits/stdc++.h>
using namespace std;
int brute(int arr[],int n){
    int leader;
    vector<int> sol;
    for(int i=0;i<n;i++){
        leader=arr[i];
        for(int j=i+1;j<n;j++){
            if(leader<arr[j]){
                break;
            }
            if(j=n-1){
                sol.push_back(leader);
            }
        }
    }
    for(auto it:sol){
        cout<<it;
    }
}

//optimal
vector<int> optimal(vector<int> &arr){
    vector <int> sol;
    int maxi=INT32_MIN;
    int n=arr.size();
    for(int j=n-1;j>=0;j--){
        if(arr[j]>maxi){
            sol.push_back(arr[j]);
        }
        maxi=max(maxi,arr[j]);

    }
    sort(sol.begin(),sol.end());
    return sol;
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    int reulut=brute(lit,size);
    cout<<reulut;
    }