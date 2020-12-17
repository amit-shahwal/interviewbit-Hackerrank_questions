#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getWays' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. LONG_INTEGER_ARRAY c
 */
long t[1000][1000];
long getWays(int n, vector<long> c,long coin) {
 if (n == 0)
    {
      return 1;
    }

    if (n < 0)
        return 0;
        if(t[n][coin]!=-1)
        return t[n][coin];
        long ans=0;
    for (int i = coin; i < (int)c.size(); i++)
    {
        int x=n-c[i];
        ans+=getWays(x,c,i);
    }

    return t[n][coin]=ans;
}
