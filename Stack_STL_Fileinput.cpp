#include<iostream>
#include<stack>
using namespace std;


int main(){

stack<string> nameStack;

freopen("name.txt","r",stdin);

string n;


for(int i=0;i<3;i++){
    cin>>n;
    nameStack.push(n);

}


while(!nameStack.empty()){
        cout<<nameStack.top()<<endl;
        nameStack.pop();
}



return 0;
}
