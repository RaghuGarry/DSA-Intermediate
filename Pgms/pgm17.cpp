//take 2 num print its sum
#include<iostream>
using namespace std;
int addnum(int a,int b){
    return a+b;
}// we can also set as void sumNUm and write cout

int main(){
    int x,y,result;
    cin>>x>>y;
    result=addnum(x,y);
    cout<<result;
}