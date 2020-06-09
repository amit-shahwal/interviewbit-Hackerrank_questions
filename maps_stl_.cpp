#include<bits/stdc++.h>
using namespace std;
//Maps-ST

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map<string, int> mp;
    map<string, int>::iterator it;
    string name;
    int marks;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == 1)
        {
            cin >> name;
            cin >> marks;

            it = mp.find(name);
            if (it != mp.end())
            { //mp.insert(make_pair("amit",30));
                mp[name] += marks;
            }
            else
                mp.insert(make_pair(name, marks));
        }
        else if (x == 2)
        {
            cin >> name;
            mp.erase(name);
        }
        else if (x == 3)
        {
            cin >> name;
            it = mp.find(name);
            if (it != mp.end())
                cout << mp[name] << endl;
            else
                cout << "0" << endl;
        }
    }
    return 0;
}
