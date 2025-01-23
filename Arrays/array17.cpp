//Majority element-->given an array of size =n find the number in which it occurs >n/2 times
//return the max no of times the num is repeated-->[1,3,3,2,2,2,2,3]=4
//Brute
#include<iostream>
using namespace std;
void brute(int arr[],int n){
    int major_num=1;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>(n/2)){
            major_num=max(major_num,count);
        }
    }
    cout<<major_num-1;
}

//Better--> Use Hashing
//Optimal--->TC-O(n),SC-O(1)
//Step1->Apply Moore Algorothm--> Majority Element I | Brute-Better-Optimal | Moore's Voting Algorithm -->Take U FOrward
//Step2->After the element found find the count of the elem in the array
void optimal(int arr[],int n){
    int ele;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            ele=arr[i];
        }
        if(arr[i]==ele){
            count++;
        }
        else{
            count--;
        }
    }

    int ans=0;
    for(int h=0;h<n;h++){
        if(arr[h]==ele){
            ans++;
        }
    }
    if(ans>(n/2)){
        cout<<ans;
    }
    else cout<<-1;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int lit[n];
    for(int i=0;i<n;i++){
        cin>>lit[i];
    }
    optimal(lit,n);
}
