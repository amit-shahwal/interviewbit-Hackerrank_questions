#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n)
{
    int ans = 0;
    int k = 0;
    if (n == 0)
        return 1;
    while (k <= n)
    { //0,4
        if (k == 0)
            ans = 1;
        else if (k % 2 != 0)
            ans = ans * 2;
        else
            ans = ans + 1;
        k++;
    }
    return ans;
}