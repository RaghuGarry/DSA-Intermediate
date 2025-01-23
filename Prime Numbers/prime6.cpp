//Give all the prime numbers with in the given number
#include<bits/stdc++.h>
using namespace std;
void constructSeive(int n,vector<bool>&Seive){
    for(int i=2;i<=n;i++){
        if(Seive[i]==true){
            for(int j=2*i;j<=n;j+=i){
                Seive[j]=false;
            }
        }
    }
}


int main(){
    int n;
    cin>>n;
    vector<bool>Seive(n,true);
    constructSeive(n,Seive);
    vector<int>allPrimes;
    for(int i=0;i<=n;i++){
        if(Seive[i]==true){
            allPrimes.push_back(i);
        }
    }
    for(int j=2;j<=allPrimes.size()-1;j++){
        cout<<allPrimes[j]<<" ";
    }
}