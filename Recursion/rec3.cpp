#include <bits/stdc++.h>
using namespace std;
//print N to 1
void rever(int i,int n){
    if(i<1) return;
    cout<<i;
    rever(i-1,n);
}

int main(){
    int c;
    cin>>c;
    rever(c,c);
}
