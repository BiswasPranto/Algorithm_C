#include <iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

//change string type to int to use number

int main(){

    stack<string> s;
    //freopen("pranto.txt","r",stdin);
    ifstream fin("pranto.txt");

    string pranto;

    for(int i=0;i<3;i++)
        {
            fin>>pranto;
            s.push(pranto);
        }



    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

        return 0;

};
