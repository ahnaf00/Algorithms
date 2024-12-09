#include <bits/stdc++.h>
using namespace std;

void printActivity(int start[], int finish[], int n)
{
    int i, j;
    i=0;
    int count = 1;

    for (j = 1; j < n; j++)
    {
        if(start[j]>=finish[i])
        {
            count++;
            i = j;
        }
    }
    
    cout << count << endl;
}

int main()
{
    int start[] = {10, 12, 20};
    int finish[] = {20, 25, 30};

    int n = sizeof(start)/sizeof(start[0]);

    printActivity(start, finish, n);

    return 0;
}