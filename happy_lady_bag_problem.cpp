#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b)
{

    int f = 0;
    map<char, int> freq;
    for (int i = 0; i < (int)b.size(); i++)
    {
        if (b[i] != '_')
        {

            freq[b[i]]++;
        }
        else
        {
            f++;
        }
    }
    if (freq.size() == 0)
        return "YES";
    if (f >= 1)
    {
        for (auto it = freq.begin(); it != freq.end(); it++)
            if (it->second == 1)
                return "NO";
        return "YES";
    }
    else
    {
        for (int i = 0; i < (int)b.size(); i++)
        {
            if (i == 0)
            {
                if (b[i] != b[i + 1])
                    return "NO";
            }
            else if (i == (int)b.size() - 1)
            {
                if (b[i] != b[i - 1])
                    return "NO";
            }
            else if ((b[i] != b[i + 1]) && (b[i] != b[i - 1]))
                return "NO";
        }
        return "YES";
    }

    return "YES";
}