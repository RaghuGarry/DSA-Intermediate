#include<iostream>
using namespace std;
int maxx(int a,int b){
    if(a<=b){
        return b;
    }
    return a;// if we assign the int as return of the func 
    //and if doesnt inclde any return type in the func it shows a garbage value
}

int main(){
    int i,j,st;
    cin>>i>>j;
    st=maxx(i,j);
    cout<<st;


}