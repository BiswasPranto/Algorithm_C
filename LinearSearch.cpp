#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int flag=0;

int *generateData(int n)
{
    int *A = new int[n];
    //srand(time(0));
    for(int i=0;i<n;i++)
    {
        A[i] = rand()%100;
    }
    return A;
}

int LinearSearch(int *A,int n,int item)
{
    for(int i=0;i<n;i++)
        {
            if(A[i]==item)
            {
            flag++;
            return i;
            }
            else return -1;
        }
}

void printData(int *A,int n)
{
    for(int i=0;i<n;i++)
        {
            cout<<A[i]<<endl;
        }
}

int main()
{
    int n=100;
    int item=5;
    srand(time(0));
    int *A=generateData(n);
    printData(A,n);

    int index = LinearSearch(A,n,item);

    if(index== -1)
        {
            cout<<"Not Found"<<endl;
        }
    else
    {
        cout<<"Found "<<endl;
        cout<<"Total "<<item<<" found "<<flag<<" Times"<<endl;
    }

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    LinearSearch(A,10,item);

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;



    return 0;
}
