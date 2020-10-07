#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    bool *visited;
    public:
    Graph(int V);
    void addEdge(int u,int v);
    bool DFS(int s,int p);
    bool Trav();
};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list <int>[V];
    visited=new bool[V+1];
    fill(visited,visited+V+1,false);
}
void Graph::addEdge(int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool Graph::DFS(int s,int p)
{
   //cout<<s<<" ";
   visited[s]=true;
   
   for(int x:adj[s])
   {
       
       if(visited[x]==false)
       {
           if(DFS(x,s)==true) return true;
           
       }
       else if(x!=p) return true;
       
   }
   return false;
      

}
bool Graph::Trav()
{
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            //cout<<endl;

           if(DFS(i,-1)==true) return true;
           
        }
        
    } return false;
}
int main()
{
    Graph g(8);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(5,6);
    g.addEdge(6,7);
    g.addEdge(5,7);

    
    cout<<g.Trav();
    
}