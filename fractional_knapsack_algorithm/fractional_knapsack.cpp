#include <bits/stdc++.h>
using namespace std;

struct KnapSack{
    int profit, weight;

    KnapSack(int profit, int weight)
    {
        this->profit = profit;
        this->weight = weight;
    }
};

bool compare(KnapSack l, KnapSack r)
{
    return (double)l.profit/l.weight > r.profit/r.weight;
}

void fractiobalKnapSack(KnapSack data[], int n, int weight)
{
    sort(data, data+n, compare);

    double maxProfit=0;

    for (int i = 0; i < n; i++)
    {
        if(data[i].weight <= weight)
        {
            maxProfit += data[i].profit;
            weight -= data[i].weight;
        }
        else
        {
            maxProfit += (double)(data[i].profit/data[i].weight)*weight;
            break;
        }
    }

    cout << maxProfit << endl;
    
}

int main()
{
    KnapSack data[] = {  {60, 10},
                        {100, 20},
                        {120, 30}};
    int weight  = 50;
    int n = sizeof(data)/sizeof(sizeof data[0]);

    fractiobalKnapSack(data, n, weight);

    return 0;
}