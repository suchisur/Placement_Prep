#include<bits/stdc++.h>
using namespace std;
#define V 5

void printMST(int parent[],int graph[V][V])
{   cout<<"Edge \t weight \n";
    for(int i=1;i<V;i++)
    {
        cout<<parent[i]<<"-"<<i<<"\t"<<graph[i][parent[i]]<<endl;
        
    }
}
int minKey(int key[],bool mst[])
{
    int m=INT_MAX,min_index;
    for(int i=0;i<V;i++)
    {
        if(mst[i]==false&&key[i]<m)
        {
            m=key[i];
            min_index=i;
        }
       
    }
     return min_index;
}
void primMST(int graph[V][V])
{
    bool mst[V];
    fill(mst,mst+V,false);
    int parent[V];
    int key[V];
    fill(key,key+V,INT_MAX);
    key[0]=0;
    parent[0]=-1;

    for(int count=0;count<V-1;count++)
    {
        int u=minKey(key,mst);
        mst[u]=true;

        for(int i=0;i<V;i++)
        {
            if(graph[u][i]&&mst[i]==false&&graph[u][i]<key[i])
            {
                key[i]=graph[u][i];
                parent[i]=u;
            }
        }
    }
    printMST(parent,graph);
}

int main()
{
    int graph[V][V]={{0,2,0,6,0},
    {2,0,3,8,5},
    {0,3,0,0,7},
    {6,8,0,0,9},
    {0,5,7,9,0}};

    primMST(graph);
}