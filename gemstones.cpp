#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr)
{
    vector<char> t;
    map<char, int> freq;
    for (int i = 0; i < (int)arr.size(); i++)
    {
        sort(arr[i].begin(), arr[i].end());
        for (int j = 0; j < (int)arr[i].size(); j++)

        {
            int k = arr[i].size();
            if (j + 1 == k)
            {
                freq[arr[i][j]]++;
                break;
            }
            if (arr[i][j] != arr[i][j + 1])
                freq[arr[i][j]]++;
        }
    }
    int c = 0;
    auto it = freq.begin();
    for (it = freq.begin(); it != freq.end(); it++)
    {
        if (it->second == arr.size())
            c++;
    }
    return c;
}