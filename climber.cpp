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

    ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end());
    for (int i = 0; i < (int)player.size(); i++)
    {
        int c = player[i];

        //sort(ranked.begin(),ranked.end(), greater<int>());
        for (int l = 0; l < (int)ranked.size(); l++)
        {
            int k = ranked[l];
            if (c == k)
            {
                ans.push_back(l + 1);
                break;
            }

            if (c > ranked[l])
            {
                ranked.insert(ranked.begin() + l, k);
                ans.push_back(l + 1);

                break;
            }
            if (l == (ranked.size() - 1))
            {
                ranked.insert(ranked.begin() + l, k);
                ans.push_back(ranked.size());

                break;
            }
        }
    }
    fo(i, 0, ans.size())
            cout
        << ans[i] << endl;
}