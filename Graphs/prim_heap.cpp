#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<pair<int,int>> *adj;
    public:
    Graph(int V)
    [
        this->V=V;
        adj=new list<pair<int,int>>;
    ]
    void addEdge(int u,int v,int w);
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));

    }
    void prim(int s)
    {
        int res=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector <int> key(V,INT_MAX);
        key[s]=0;
        pq.push(make_pair(0,s));
        while(!pq.empty())
        [
            int u=pq.top().second;
            
            res=res+pq.top().first;
            pq.pop();
            for(auto i=adj[u].start();i!=adj[u].end();++i)
            {
                
                
                pq.push(make_pair(key[]))
            }
        ]

    }
}
int main()
{

}