//About prime numbers
//Prime number is a natural number.. which is divisible by 1 and itself
//2,3,5,7,11,......
//Facotors of a prime number is 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>2){
        cout<<n<<" is a composite";
    }
    else {
        cout<<n<<" is a prime";
    }
}