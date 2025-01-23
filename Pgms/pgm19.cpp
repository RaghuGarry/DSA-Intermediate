//pass by value
#include<iostream>
using namespace std;
string change(string a){
    a[0]='$';
    cout<<a<<"\n";
}

int main(){
    string name="Chinnu";
    change(name);
    cout<<name;//it still prints the Chinnu

}