
//INSERTION SORT

#include <iostream>
using namespace std;

main()

{

    int n=6,i,ptr,temp;
    int a[n] = {4,3,2,5,1,9};
    for(i=1;i<n;i++)
        {
            temp = a[i];

            ptr = i-1;

            while(ptr>=0 && temp<=a[ptr])
                {
                    a[ptr+1] = a[ptr];
                    ptr--;

                }

                a[ptr+1] = temp;

        }

        for(i=0;i<n;i++){
                cout<<a[i]<<" ";
        }

        return 0;
}
