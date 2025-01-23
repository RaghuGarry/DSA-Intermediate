//pass by reference
#include<iostream>
using namespace std;
string byref(string &sr){//addres of the string
     sr[0]='N';
} 
int main(){
    string name="RaNa";
    byref(name);
    cout<<name;

}