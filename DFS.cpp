#include <bits/stdc++.h>
using namespace std;

# define m 100
vector<int> g[m];
int visited[m];
int dis[m];


void DFS(int v)
{

    stack<int> s;
    s.push(v);
    visited[v]=1;
    dis[v]=0;

    while(!s.empty())
    {
        int p=s.top();
        s.pop();
        cout<<p<<" ";
        for(int i=0; i<g[p].size(); i++)
        {
            int next = g[p][i];
            if(visited[next]==0)
            {
                s.push(next);
                visited[next]=1;
                dis[next]=dis[p]+1;
            }
        }

    }


}



int main()
{

    int node, edge;

    cin>>node>>edge;

    int u,v;

    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    cout<<endl;

    for(int i=0; i<node; i++)
    {
        cout<<i<<"-->";
        for(int j=0; j<g[i].size(); j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int source;
    cout<<"Enter source for DFS: ";
    cin>>source;

    DFS(source);

    cout<<"\nDistance from "<<source<<" : "<<endl;

    for(int i=0; i<node; i++)
    {
        cout<<i<<" "<<dis[i]<<endl;
    }



    return 0;
}

