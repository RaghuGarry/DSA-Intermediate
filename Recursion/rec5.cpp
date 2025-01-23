#include <bits/stdc++.h>
using namespace std;
//print N to 1 using back tracking
void back(int i,int n){
    if(i>n)return;
    back(i+1,n);
    cout<<i;
}

int main(){
    int z;
    cin>>z;
    back(1,z);
}