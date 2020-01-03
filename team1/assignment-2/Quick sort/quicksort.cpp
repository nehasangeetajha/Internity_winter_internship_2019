#include<bits/stdc++.h>
using namespace std;

template<class T>
void swap(T* a, T* b)
{
    T t = *a;
    *a = *b;
    *b = t;
}

template<class T>
int partition (T arr[], int low, int high)
{
    T pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

template<class T>
void quickSort(T arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

template <class T>
void printArray(T arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n = 5;
    char arr[n] = {'b','e','z','a','f'};
    quickSort<char>(arr,0,n-1);
    printArray<char>(arr,n);
}
