#include <bits/stdc++.h>
using namespace std;

void minimumCoin(int coins[], int sum, int n)
{
    sort(coins, coins+n);

    vector<int> ans;
    int count=0;

    for (int i = n-1; i >= 0; i--)
    {
        while (sum >= coins[i])
        {
            sum -= coins[i];
            ans.push_back(coins[i]);
            count++;
        }
    }

    cout << count << endl;

}

int main()
{
    int coins[] = {9,6,5,1};
    int sum = 19;
    int n = sizeof(coins)/sizeof(coins[0]);
 
    minimumCoin(coins, sum, n);

    return 0;
}