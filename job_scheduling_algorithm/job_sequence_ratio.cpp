#include <bits/stdc++.h>
using namespace std;

struct Job{
    int id;
    int loss;
    int time;
    double ratio;
};

bool compare(Job l, Job r)
{
    return l.ratio > r.ratio;
}

void minimizeLoss(int l[], int t[], int n)
{
    Job jobs[n];

    for (int i = 0; i < n; i++)
    {
        jobs[i].id = i + 1;
        jobs[i].loss = l[i];
        jobs[i].time = t[i];
        jobs[i].ratio = (double)l[i] / t[i];
    }

    sort(jobs, jobs + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << jobs[i].id << " ";
    }
    cout << endl;
}

int main()
{
    int l[] = {3, 1, 2, 4};
    int t[] = {4, 1000, 2, 5};

    int n = sizeof(l) / sizeof(l[0]);

    minimizeLoss(l, t, n);

    return 0;
}
