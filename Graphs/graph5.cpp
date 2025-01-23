#include<bits/stdc++.h>
using namespace std;
//Representation of graph
//Given "n"nodes and "m" edges
//Weighted Undirected Graph

//Adjacecny Matrix Representation
//If the nodes are one based indexing create a matrix of [n+1][n+1]
//If the nodes are zero based indexing create a matrix of [n][n]

int main(){
    int n,m,weights;
    cin>>n>>m;
    int AdjMAtrix[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        AdjMAtrix[u][v]=weights;
        AdjMAtrix[v][u]=weights;//In undirected graph--> u-v == v-u
    }
    return 0;
}


//TC---->O(n)
//SC---->O(n^2)