#include <bits/stdc++.h>
using namespace std;
//sum of first n natural numbers
void func(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    func(i-1,sum+i);
}
int main(){
    int n,sum=0;
    cin>>n;
    func(n,sum);
}