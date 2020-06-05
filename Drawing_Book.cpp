//Drawing Book
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p)
{

    int c1;
    int ans;
    if (n == 1 || p == 1)
        return 0;
    if (n % 2 == 0 && (n - p == 1))
    {
        return 1;
    }
    int k = p - 1;
    if (p % 2 != 0)
    {
        c1 = (k / 2);
    } //c1=1;
    else
    {
        c1 = (k / 2) + 1;
    }
    int kk = n - p;  //3
    int c2 = kk / 2; //1
    if (c1 > c2)
        return c2;
    if (c2 > c1)
        return c1;

    return c1;
}
