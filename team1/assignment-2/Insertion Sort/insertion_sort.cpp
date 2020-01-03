#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
    int i,j,v;
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
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    insertionSort(arr,n);
    printArray(arr,n);
}
