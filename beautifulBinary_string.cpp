#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
string str = "010";
int beautifulBinaryString(string b)
{
    int c = 0;
    for (int i = 0; i < (int)b.size(); i++)
    {
        if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0')
        {
            c++;
            i += 2;
        }
    }
    return c;
}
