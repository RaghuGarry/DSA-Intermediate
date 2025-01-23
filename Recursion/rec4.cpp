#include <bits/stdc++.h>
using namespace std;
//print 1 to N using back tracking
void back(int i,int n){
    if(i<1)return;
    back(i-1,n);
    cout<<i;
}

int main(){
    int z;
    cin>>z;
    back(z,z);
}