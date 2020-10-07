#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;
    bool *visited;
    bool *rec;
    public: 
    Graph(int V)
    {
        this->V=V;
        adj=new list<int>[V];
        visited=new bool[V+1];
        rec=new bool[V];
        fill(visited,visited+V+1,false);
        fill(rec,rec+V,false);
    }
    bool Trav();
    bool DFS(int s);
    void addEdge(int u,int v );
};
void Graph::addEdge(int u,int v)
{
    adj[u].push_back(v);
    
}
bool Graph::DFS(int s)
{
    visited[s]=true;
    rec[s]=true;
    //cout<<s<<" ";
    for(int x:adj[s])
    {
        if(visited[x]==false&&DFS(x)) return true;
        else if(rec[x]==true) return true;
        
    }
    rec[s]=false;
    return false;
}
bool Graph::Trav()
{
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            if(DFS(i)==true) return true;
            
        }
    }
    return false;
    
}
int main()
{
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(4,1);
    g.addEdge(3,4);
    cout<<" "<<endl<<g.Trav();
}