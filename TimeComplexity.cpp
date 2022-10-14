#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int * bubbleSort(int *p, int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if(p[i]>p[i+1])
                {
                    swap(p[i],p[i+1]);
                }
        }
    }

}

void printList(int *p, int n){

    for(int i=0;i<n;i++)
        {
            cout<<p[i]<<endl;
        }

}



int main(){

    int n=10;


 int *A = new int[n];
// generate random int
srand(time(0));
for(int i=0;i<n;i++)
    {
        A[i] = rand()%100;
    }

printList(A,n);

auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
   // int *m = bubbleSort(A,n);

    bubbleSort(A,n);
    cout<<"*--------------BubbleSort--------------"<<endl;
    printList(A,n);
    /* .......................................  */

 /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;


return 0;
}
