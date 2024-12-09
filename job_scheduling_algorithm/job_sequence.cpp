#include <bits/stdc++.h>
using namespace std;

struct Job{
    char id;
    int deadline;
    int profit;
};

bool compare(Job l, Job r)
{
    return l.profit > r.profit;
}

void maximumProfit(Job arr[], int n)
{
    sort(arr, arr+n, compare);

    int result[n];
    bool slot[n];

    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].deadline)-1; j >= 0 ; j--)
        {
            if(slot[j] ==  false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(slot[i])
        {
            cout << arr[result[i]].id << endl;
        }
    }
    
    
}


int main()
{
    Job arr[] = { { 'a', 4, 20 },
                  { 'b', 1, 10 },
                  { 'c', 1, 40 },
                  { 'd', 1, 30 }
                };

    int n = sizeof(arr)/sizeof(arr[0]);

    maximumProfit(arr, n);


    return 0;
}