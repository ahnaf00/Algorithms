#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i<j)
    {
        while (arr[i] <= pivot && i<= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if(i<j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    
    return j;
    
}


void quickSort(vector<int> &arr, int low, int hight)
{
    if(low < hight)
    {
        int pIndex = partition(arr, low, hight);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, hight);
    }
}


int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}