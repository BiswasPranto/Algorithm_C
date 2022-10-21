#include<bits/stdc++.h>
using namespace std;

void printList(int *p,int s)
{
    for(int i=0; i<s; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int partition( int *m,int start,int end)
{
    int pivot=m[end];
    int pIndex=start;

    for(int i=start; i<end-1; i++)
    {
        if(m[i]<pivot)
        {
            swap(m[i],m[pIndex]);
            pIndex++;
        }
    }

    swap(m[pIndex],m[end]);

    return pIndex;
}

int main()
{
    int a[]= {2,5,6,9,15,4};
    printList(a,6);

    int p = partition(a,0,5);
    cout<<p<<" "<<a[p]<<endl;
    printList(a,6);
    return 0;

}
