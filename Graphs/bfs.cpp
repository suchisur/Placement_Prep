#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;
    bool *visited;
    public: 
    Graph(int V);
    void addEdge(int u,int v);
    void BFS(int s);
    void Trav();
    
};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
    visited=new bool[V+1];
    fill(visited,visited+V+1,false);
}

void Graph::addEdge(int u,int v)
{   
   
    adj[u].push_back(v);
    adj[v].push_back(u);

}
void Graph::BFS(int s)
{
    list <int> q;
   
    q.push_back(s);
    visited[s]=true;
  
    while(!q.empty())
    {
        s=q.front();
        cout<<s<<" ";
        q.pop_front();
        
        for(int x:adj[s])
        {
            if(visited[x]==false)
            {
                
                visited[x]=true;
                q.push_back(x);
            }
        }
    }
   
    
}
void Graph::Trav()
{int count=0;
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            count++;
            BFS(i);
            cout<<endl;
        }
       
    }
     cout<<"The number of fragments are : "<<count<<endl;
}
int main()
{
   Graph g(5);
   g.addEdge(0,1);
   g.addEdge(0,2);
   g.addEdge(2,3);
   g.addEdge(2,4);

   g.Trav();

}