#include <bits/stdc++.h>
using namespace std;
//print yuor name for n times
void name(int i,int n){
    if(i>n) return;
    printf("Raghu\n");
    name(i+1,n);
}
int main(){
    int x;
    cin>>x;
    name(1,x);
}