#include<iostream>
using namespace std;
void PrintName(string a){//parameter
    cout<<"Heyy "<<a;
}

int main(){
    string name;
    cin>>name;
    PrintName(name);
    string city;
    cin>>city;
    PrintName(city);

}