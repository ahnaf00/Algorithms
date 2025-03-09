#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int low, int high, int key)
{
    if(low<=high)
    {
        int mid = (low+high)/2; 

        if(arr[mid] == key)
        {
            return mid;
        }

        if(key<arr[mid])
        {
            return binary_search(arr,low, mid-1, key);
        }

        return binary_search(arr, mid+1, high, key);
    }

    return -1;
}
 

int main()
{
    int n,q;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int key;
    
    for (int i = 0; i < q; i++)
    { 
        cin >> key;
        int result = binary_search(arr, 0, n-1, key);

        if(result == -1)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
        

    return 0;
}