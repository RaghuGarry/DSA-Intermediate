#include<bits/stdc++.h>
using namespace std;
//Representation of graph
//Given "n"nodes and "m" edges
//Directed Graph

//Adjacecny Matrix Representation
//If the nodes are one based indexing create a matrix of [n+1][n+1]
//If the nodes are zero based indexing create a matrix of [n][n]

int main(){
    int n,m;
    cin>>n>>m;
    int AdjMAtrix[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        AdjMAtrix[u][v]=1;
        //In Directed graph--> u-v != v-u
    }
    return 0;
}


//TC---->O(n)
//SC---->O(n^2)