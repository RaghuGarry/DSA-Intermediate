//Longest Subarray with Sum K-->Sub array with longest length
//Subarray--> Contigious part
//Sub Seq--> Non Contigious Also

//Brute--> TC-O(n^3)
//Generate all the possible sub array
//And compute all the sum compare to k and which has the longest length return
#include<iostream>
using namespace std;
int brute(int a[],int n,int z){
    int length=0;//This is here bxoz we dont want to update the list
    //if the sum is not equal to k
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int z=i;z<=j;z++){
                sum+=a[z];
            }
            if(sum==z){
                length=max(length,j-i+1);
            }
        }
    }
    return length;
}
//Better--> Use Hashing
//Optimal --> Sliding Window-->TC-O(2n),SC-O(1)
int optimal(int arr[],int n,int k){
    int left=0,right=0;
    long long sum=arr[0];
    int maxlength=0;
    while(right<n){
        while(sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlength=max(maxlength,right-left+1);
        }
        right++;
        if(right<n) sum+=arr[right];

    }
    return maxlength;

}

int main(){
    int n,k;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter the target sum: ";
    cin>>k;
    int lit[n];
    for(int i=0;i<n;i++){
        cin>>lit[i];
    }

    int result=brute(lit,n,k);
    cout<<result;


}

