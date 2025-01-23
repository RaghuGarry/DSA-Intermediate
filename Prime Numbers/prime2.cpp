#include<bits/stdc++.h>
using namespace std;
//check the number is prime or not
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<n<<" is a prime";
    }
    else {
        cout<<n<<" is a composite";
    }//Tc-O(Sqrt(n))
}