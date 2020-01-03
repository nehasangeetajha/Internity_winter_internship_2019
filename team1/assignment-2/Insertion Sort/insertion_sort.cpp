#include<bits/stdc++.h>
using namespace std;

template <class T>
void insertionSort(int arr[],int n)
{
    int i,j;
    T v;
    for(i = 1;i<n;i++)
    {
        v=arr[i];
        j = i;
        while(j>=1&&arr[j-1]>v)
        {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = v;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n = 5;
    int arr[n] = {5,4,1,2,9};
    insertionSort<int>(arr,n);
    printArray(arr,n);
}
