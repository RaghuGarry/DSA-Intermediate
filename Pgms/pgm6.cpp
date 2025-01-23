//Nested If
/*
Input age..if age is lt 18-->Not eligile for job
age is gte 18 and lte 54-->Eligible for job
age is gte 55 and lte 57--> Eligiblie but Happy Reteirement
age is gt 57-->Byee
*/
//Best Approach
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"age: ";
    cin>>age;
    if(age<18){
        cout<<"Not Eligible";
    }
    else if(age<=57){
        cout<<"Eligibe for job"<<" ";
        if(age>=55){
            cout<<"Eligible but Happy Retiement";
        }
    }
    else{
        cout<<"Byeee";
    }
}