#include <bits/stdc++.h>
//bit_manipulation
using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r)
{

    int ans;
    int sum = 0;
    while (l != r)
    {
        int kk = l;
        int kr = l;
        while (kr <= r)
        {
            ans = kk ^ kr;
            kr++;
            if (ans > sum)
                sum = ans;
        }
        l++;
    }
    return sum;
}