#include <bits/stdc++.h>
using namespace std;
//check if the given string is palindrome or not
bool palin(int i ,int j,string a){
    if(i>=j)return true;
    if(a[i]==a[j]) return palin(i+1,j-1,a);
    return false;
}

int main(){
    string z="11211";
    int n=z.size();
    cout<<palin(0,n-1,z);
}