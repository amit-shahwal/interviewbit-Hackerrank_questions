#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
int static t[2003][2003];
int knapsack(int wt[], int val[], int W, int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (t[n][W] != -1)
        return t[n][W];
    if (wt[n - 1] <= W)
        return t[n][W] = max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1), knapsack(wt, val, W, n - 1));
    else if (wt[n - 1] > W)
    {
        return t[n][W] = knapsack(wt, val, W, n - 1);
    }
    return 0;
}

int main()
{
    ll tt, n, s;
    cin >> tt;
    while (tt--)
    {
        memset(t, -1, sizeof(t));
        int wt[2003];
        int val[2003];
        cin >> s;
        cin >> n;
        fo(i, 0, n)
        {
            cin >> wt[i];
            cin >> val[i];
        }
        cout << knapsack(wt, val, s, n);
    }
}