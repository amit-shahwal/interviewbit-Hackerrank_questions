#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
int findSum(string str)
{
    int t[1];

    int count = 0, k;

    // Your code here
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]) && !isdigit(str[i + 1]) && !isdigit(str[i - 1]))
            count += str[i] - '0';
        else if (isdigit(str[i + 1]) && isdigit(str[i]))
        {
            if (k == 0)
            {
                t[1] = str[i] - '0';
                k++;
            }
            else
            {
                int zzz = t[1];
                int kk = (zzz * 10) + (str[i] - '0');

                t[1] = kk;
            }
        }
        else if (isdigit(str[i - 1]) && isdigit(str[i]))
        {
            int z = t[1] * 10;
            count += z + (str[i] - '0');
        }
        else
            k = 0;
    }
    return count;
}

int main()
{
    cout << findSum("1abc2345");
}