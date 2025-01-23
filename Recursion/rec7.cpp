#include <bits/stdc++.h>
using namespace std;
//functionsl recuresion
int f(int n){
    if(n==0) return 0;
    return n+f(n-1);
}
int main()
{
    int x;
    cin>>x;
    cout<<f(x);
}