#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;
    bool *visited;
    public: 
    Graph(int V)
    {
        this->V=V;
        adj=new list<int>[V];
        visited=new bool[V+1];
        fill(visited,visited+V+1,false);
    }
    void Trav();
    void DFS(int s);
    void addEdge(int u,int v );
};
void Graph::addEdge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void Graph::DFS(int s)
{
    visited[s]=true;
    cout<<s<<" ";
    for(int x:adj[s])
    {
        if(visited[x]==false)
            DFS(x);
        
    }
}
void Graph::Trav()
{
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            DFS(i);
            cout<<endl;
        }
    }
    
}
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(3,4);
    g.Trav();
}