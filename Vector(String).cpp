#include <iostream>
#include<vector>
using namespace std;



int main(){

    vector<string>vec;

    vec.push_back("HELl");
    vec.push_back("Let");
    vec.push_back("Lose");

    //--------------------Or method-1-----------------
    vector<string>::iterator it;

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
