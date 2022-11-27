#include<bits/stdc++.h>

using namespace std;

# define m 100
vector<int> g[m];


int main()
{
    int node,edge;
    cin>> node,edge;

    int u,v;

    for(int i=0;i<edge;i++)
        {
            cin>>u>>v;

            g[u].push_back(v);
            g[v].push_back(u);


        }

        for(int i=0;i<node;i++)
        {

            cout<<i<<"-->";

            for(int j=0;j<g[i].size();j++){
                cout<<g[i][j]<<" ";
            }

    cout<<endl;
        }
        return 0;
}
