#include <bits/stdc++.h>
using namespace std;
//print 1 to n in lonearly
void num(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    num(i+1,n);
}

int main(){
    int a;
    cin>>a;
    num(1,a);
}