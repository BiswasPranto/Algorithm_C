#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int low, int high, int mid)
{
    int *c= new int [10];
    int i=0, j=0, k=0;
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}

void mergeSort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}


int main()
{
    int myarray[]={101 ,10 ,2 ,43 ,12 ,54 ,34 ,64, 89 ,76}, num=10;

    mergeSort(myarray, 0, num-1);

    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<" ";
    }
}
