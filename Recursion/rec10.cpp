#include <bits/stdc++.h>
using namespace std;
//finonacci number
int fib(int n){
    if(n<=1) return n;
    return (fib(n-1)+fib(n-2));
}

int main(){
    int a;
    cin>>a;
    cout<<fib(a);
}