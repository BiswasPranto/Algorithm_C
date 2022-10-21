#include<bits/stdc++.h>
using namespace std;

void printList(int *p,int s)
{
    for(int i=0;i<s;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
}

int *mergeList(int *a,int *b,int n,int m)
{
    int *c= new int [n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m)
        {
            if(a[i]<b[j])
                {
                    c[k]=a[i];
                    k++;
                    i++;
                }
            else
                {
                    c[k]=b[j];
                    k++;
                    j++;
                }
        }
        while(i<n)
            {
                c[k++]=a[i++];
            }
        while(j<m)
            {
                c[k++]=b[j++];
            }
        return c;
}

int main()
{
    int a[]={2,5,6,9,15,20};
    int b[]={1,4,7,8,12};
    printList(a,6);
    printList(b,5);

    int *m=mergeList(a,b,6,5);
    printList(m,11);

    return 0;
}
