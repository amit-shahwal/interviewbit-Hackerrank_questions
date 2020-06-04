#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
    string nstr;
    vector<int> arr;
    // Complete this function
    for (int i = 0; i < str.size(); i++)
    {
        if (str.at(i) != ',')
            nstr += str.at(i);
        if (str.at(i) == ',' || (i == str.size() - 1))
        {
            int x = stoi(nstr);
            arr.push_back(x);
            nstr = "";
        }
    }
    return arr;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
