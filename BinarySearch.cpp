#include<bits/stdc++.h>
using namespace std;

int * bubbleSort(int *A, int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if(A[i]>A[i+1])
                {
                    swap(A[i],A[i+1]);
                }
        }
    }

}

int binarySearch(int *A,int low,int high,int x)
{
    if(low>high)
        return -1;

    else
    {
        int mid=(low + high)/2;
    if(A[mid]==x)
        return mid;
    else if(A[mid]>x)
        return binarySearch(A,low,mid-1,x);
    else if(A[mid]<x)
        return binarySearch(A,mid+1,high,x);

    }
}

int main()
{

    int A[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int x;
    cout<<"Enter the number to search"<<endl;
    cin>>x;

    int index= binarySearch( A,0,n-1, x);

    if(index==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found "<<endl;
    }

    return 0;
}
