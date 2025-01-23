//Stock market trading--we have to buy at the lowest stock
//and sell at the highrdt stock
//To obtain the maximum profit
//NOTE that the we cant sell before buying
//If you are selling on the ith day --> you are more likely wanted to buy the stock in
//min(0 to i-1) day
#include<iostream>
using namespace std;
int optimal(int arr[],int n){
    int mini=arr[0];
    int profit=0,cost;
    for(int i=1;i<n;i++){
        cost=arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);
    }
    return profit;
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    int result=optimal(lit,size);
    cout<<result;
}
