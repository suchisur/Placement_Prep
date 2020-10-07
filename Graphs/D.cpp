#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<pair<int,int>> *adj;
    public:
    Graph(int V)
    {
        this->V=V;
        adj=new list<pair<int,int>>[V];

    }
    void addEdge(int u,int v,int w)
    {
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    void findD(int s)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push(make_pair(0,s));
        vector<int> d(V,INT_MAX);

        d[0]=0;
        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            for(auto i=adj[u].begin();i!=adj[u].end();++i)
            {
                int v=(*i).first;
                int w=(*i).second;

                if(d[v]>w+d[u])
                {
                    d[v]=d[u]+w;
                    pq.push(make_pair(d[v],v));
                }
            }
        }

        for(int i=0;i<V;i++)
        {
            cout<<i<<" "<<d[i]<<endl;
        }
    }


};


int main()
{
   	int V = 9; 
	Graph g(V); 

	// making above shown graph 
	g.addEdge(0, 1, 4); 
	g.addEdge(0, 7, 8); 
	g.addEdge(1, 2, 8); 
	g.addEdge(1, 7, 11); 
	g.addEdge(2, 3, 7); 
	g.addEdge(2, 8, 2); 
	g.addEdge(2, 5, 4); 
	g.addEdge(3, 4, 9); 
	g.addEdge(3, 5, 14); 
	g.addEdge(4, 5, 10); 
	g.addEdge(5, 6, 2); 
	g.addEdge(6, 7, 1); 
	g.addEdge(6, 8, 6); 
	g.addEdge(7, 8, 7); 

	g.findD(0); 

	return 0; 
}

