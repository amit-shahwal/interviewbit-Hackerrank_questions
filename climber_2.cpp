#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
vector<int> ranked;
vector<int> player;
int main()
{
    int p;
    cin >> p;

    fo(i, 0, p)
    {
        int t;
        cin >> t;
        ranked.pb(t);
    }
    int k;
    cin >> k;
    fo(i, 0, k)
    {
        int t;
        cin >> t;
        player.pb(t);
    }
    vector<int> ans;
    stack<long long int> rn;
    long long int i;
    for (i = 0; i < (int)ranked.size(); ++i)
    {

        if (rn.empty() || rn.top() != ranked[i])
            rn.push(ranked[i]);
    }

    for (i = 0; i < (int)player.size(); ++i)
    {

        while (!rn.empty() && player[i] >= rn.top())
            rn.pop();
        ans.push_back(rn.size() + 1);
    }
    fo(i, 0, ans.size())
            cout
        << ans[i] << endl;
}