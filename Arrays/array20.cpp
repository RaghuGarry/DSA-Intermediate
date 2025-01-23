//Reaarange array ele by the sign
//I/p=[3,1,-2,-5,2,-4]
//O/p=[3,-2,1,-5,2,-4]->Given that both pos and neg are eq in count
//That is even odd even odd even odd... and the relative order of pos and neg should not change
//First 3 and 1 and 2... first -2 and then -5 and then -4
//Brute-->TC-O(2n),SC-O(n)
//note that in ans all the pos are in even indexes and neg are in odd indexes
// Take 2 mew arrays name pos and neg
//for i in given aray append positive num to pos  simi
//again for appending into req ordr
//for i to n i%2==0 arr[i]=pos[i] simi to neg
#include<iostream>
using namespace std;
void brute(int arr[],int n){
    int pos[n/2];
    int neg[n/2];//becoz both pos and neg are equal in cout
    int j=0;
    int z=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos[j]=arr[i];
            j++;

        }
        else{
            neg[z]=arr[i];
            z++;

        }
    }
    for(int j=0;j<n/2;j++){
            arr[2*j]=pos[j%2];
            arr[2*j+1]=neg[j%2];
    }

}
//Optimal-TC-O(n),SC-O(n)
void optimal(int arr[],int n){
    int req[n];
    int x=0;
    int y=1;
    for(int k=0;k<n;k++){
        if(arr[k]>0){
            req[x]=arr[k];
            x=x+2;
        }
        else{
            req[y]=arr[k];
            y=y+2;
        }
    }
    for(int c=0;c<n;c++){
        cout<<req[c]<<endl;
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int lit[size];
    for(int i=0;i<size;i++){
        cin>>lit[i];
    }
    optimal(lit,size);
    
}
