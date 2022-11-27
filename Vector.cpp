#include <iostream>
#include<vector>
using namespace std;



int main(){

    vector<int>vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    //--------------------Or method-2-----------------
    vector<int>::iterator it;

    for(it=vec.begin(); it !=vec.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //--------------------Or method-2-----------------
    for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }

        return 0;

};
