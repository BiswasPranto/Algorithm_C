#include <iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

//change string type to int to use number


int main()
{
    queue <string> q;

    ifstream fin("pranto.txt");

    string pranto;

    for(int i=0;i<3;i++)
        {
            fin>>pranto;
            q.push(pranto);
        }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;

};
