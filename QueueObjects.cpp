#include <iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

//change string type to int to use number

class student
{
private :
    int id;
    string name;
    float cgpa;

public:
    student()
    {

    }
    student(int id, string name,float cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;

    }

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }

};

int main()
{

    queue<student> st;
    //freopen("StudentCgpa.txt","r",stdin);
    ifstream fin("StudentCgpa.txt");

    string s;

    int idd;
    string nname;
    float ccgpa;

    for(int i=0; i<3; i++)
    {
        fin>>idd>>nname>>ccgpa;

        student s(idd,nname,ccgpa);
        st.push(s);
    }


    while(!st.empty())
    {
        student s = st.front();
        cout<<s.getId()<<" "<<s.getName()<<" "<<s.getCgpa()<<endl;
        st.pop();
    }

    return 0;

};
