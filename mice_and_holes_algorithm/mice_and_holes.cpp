#include <bits/stdc++.h>
using namespace std;


void minimumTime(int mice[], int holes[],int m,int h)
{
    sort(mice, mice+m);
    sort(holes, holes+h);

    if(m!=h)
    {
        cout << "Error!" << endl;
    }

    int max=0;

    for (int i = 0; i < m; i++)
    {
        if(max < abs(mice[i]-holes[i]))
        {
            max = abs(mice[i]-holes[i]);
        }
    }

    cout << "Minimum time " << max << endl;
    
}


int main()
{

    int mice[] = {4, -4, 2};
    int holes[] = {4, 0, 5};

    int m = sizeof(mice)/sizeof(mice[0]);
    int h = sizeof(holes)/sizeof(holes[0]);

    minimumTime(mice, holes, m, h);

    return 0;
}