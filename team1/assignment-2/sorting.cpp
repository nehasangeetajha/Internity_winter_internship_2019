#include<bits/stdc++.h>
using namespace std;

//Heap Sort
template <class Iterator>
void build_heap (Iterator start, Iterator stop) {
	unsigned int heapSize = stop - start;
	for (int i = heapSize / 2; i >= 0; i--)
		adjust_heap(start, heapSize, i);
}

template <class Iterator>
void sort_heap (Iterator start, Iterator stop) {
	unsigned int lastPosition = stop - start - 1;
	while (lastPosition > 0) {
		swap(start[0], start[lastPosition]);
		adjust_heap(start, lastPosition, 0);
		lastPosition--;
		}
}

template <class Iterator>
void heap_sort(Iterator start, Iterator stop) {
	build_heap (start, stop);
	sort_heap (start, stop);
}

//Merge sort
template<class t>
class sort {
	t *list;
	public:
		sort(t *data, int size) {
			list = data;
			mergesort(0,size-1);
		}

		void mergesort(int low, int high) {
			int mid;
			if(low < high) {
				mid = (low + high) /2;
				mergesort(low, mid);
				mergesort(mid + 1, high);
				merge(low, high, mid);
			}
		}

		void merge(int low, int high, int mid) {
			t temp[10];
			int i = low, j, l = low, m = mid + 1;
			while(l <= mid && m <= high) {
				if(list[l] <= list[m]) {
					temp[i] = list[l];
					l++;
				}
				else {
					temp[i] = list[m];
					m++;
				}
				i++;
			}
			if(l > mid) {
				for(j = m; j <= high; j++) {
					temp[i] = list[j];
					i++;
				}
			}
			else {
				for(j = l; j <= mid; j++) {
					temp[i] = list[j];
					i++;
				}
			}
			for(j = low; j <= high; j++)
				list[j] = temp[j];
		}
};

//Quick sort
template<class T>
void swap(T* a, T* b)
{
    T t = *a;
    *a = *b;
    *b = t;
}

template <class T>
int Partition(T arr[],int low,int high)
{
    int left,right;
    T key = arr[low];
    left = low;
    right= high;

    while(left<right)
    {
        while(arr[left]<=key)
            left++;
        while(arr[right]>key)
            right--;
        if(left<right)
        {
            swap(&arr[left],&arr[right]);
        }
    }
    arr[low] = arr[right];
    arr[right] = key;
    return right;
}

template <class T>
void quickSort(T arr[],int low,int high)
{
    int pivot;
    //Base case
    if(high>low)
    {
        pivot = Partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

//Insertion Sort
template <class T>
void insertionSort(T arr[],int n)
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
    int n =10;
    int arr1[10] = {12,45,21,3,9,8,40,45,76,0};
    char arr2[10] = {'s','a','v','n','p','w','d','q','o','x'};
    /*insertionSort(arr1,n);
    printArray(arr1,n);
    insertionSort(arr2,n);
    printArray(arr2,n);*/
	
	/*quickSort(arr1,0,n-1);
    printArray(arr1,n);
    quickSort(arr2,0,n-1);
    printArray(arr2,n);*/
	

}

