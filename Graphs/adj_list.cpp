#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v)
{   
    adj[v].push_back(u);
    adj[u].push_back(v);

}
int main()
{
    vector<int> adj[5];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,3);


}