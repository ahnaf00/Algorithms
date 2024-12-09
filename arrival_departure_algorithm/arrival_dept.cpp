#include <bits/stdc++.h>
using namespace std;

void countPlatforms(double arrival[], double departure[], int n)
{
    sort(arrival, arrival+n);
    sort(departure, departure+n);

    int count = 0;
    int maxCount = 0;
    int i = 0, j = 0;
    while (i<n)
    {
        if(arrival[i] < departure[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }

        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;
    
}

int main()
{
    double arrival[] = {2.00, 2.10, 3.00, 3.20, 3.50, 5.00};
    double departure[] = {2.30, 3.40, 3.20, 4.30, 4.00, 5.20};
    int n = 6;
    
    countPlatforms(arrival, departure, n);
    return 0;
} 