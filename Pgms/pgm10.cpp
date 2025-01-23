#include<iostream>
using namespace std;
int main(){
    string s="Striver";
    int len=s.size();
    cout<<len;//Returns the num of char in the str
    cout<<s[len-1];//Returns the last char
    s[len-1]='z';//changing the last but one ele into h
    cout<<s;
}

//----- Strings are represented with "dfghjkmnbg" double quotes
//----- Charecter are assignes with 'R' single quotes