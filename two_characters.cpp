#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
int alternate(string s)
{
    string t, sc;
    sc = t = s;
    sort(t.begin(), t.end());
    t.erase(unique(t.begin(), t.end()), t.end());
    cout << t;
    int count, max = 0;
    string tt = "";

    for (int i = 0; i < t.size(); i++)
    {
        for (int j = i + 1; j < (int)t.size(); j++)
        {

            for (int k = 0; k < (int)s.size(); k++)
            {
                if (s[k] == t[i] || s[k] == t[j])
                    tt += s[k];
            }
            for (int q = 0; q < (int)tt.size(); q++)
            {
                if (tt[q] == tt[q + 1])
                {
                    tt.clear();
                    break;
                }
            }
            count = tt.size();
            if (count >= max)
                max = count;
            tt.clear();
        }
    }

    return max;
}