#include<bits/stdc++.h>
using namespace std;
//Representation of graph
//Given "n"nodes and "m" edges
//Directed Graph

//Adjacency List Rpresentation
//If the nodes are one based indexing create a List of [n+1][n+1]
//If the nodes are zero based indexing create a List of [n][n]
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>AdjList[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        AdjList[u].push_back(v);
    }
    return 0;
}

//TC---O(n)
//SC---(E)