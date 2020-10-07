#include<bits/stdc++.h>
using namespace std;
list<int> topo;

class Graph
{
    int V;
    list<int> *adj;
    int *indegree;

    public:
    Graph(int V)
    {
        this->V=V;
        adj=new list<int>[V];
        indegree=new int[V];
        for(int i=0;i<V;i++){indegree[i]=0;}
        
    }
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
        indegree[v]+=1;
    }
    void TopoSort();
};
void Graph::TopoSort()
{
    queue<int> q;
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0) q.push(i);
    }

    while(!q.empty())
    {
        int s=q.front();
        topo.push_back(s);
        q.pop();
        for(int x:adj[s])
        {
            indegree[x]-=1;
            if(indegree[x]==0)
            {
                q.push(x);
            }
        }
    }

}

int main()
{
    Graph g(5);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(2,3);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.TopoSort();
}