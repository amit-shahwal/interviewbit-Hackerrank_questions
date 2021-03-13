#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dijkstra(int n, int m)
{
    vector<vector<pair<int, int>>> s(n + 1);
    bool mark[n + 1] = {0};
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
    int dis[n + 1];
    fill(dis, dis + n + 1, 1000000000);
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        s[a].push_back({w, b});
        s[b].push_back({w, a});
    }
    int v;
    cin >> v;
    Q.push({0, v});
    dis[v] = 0;
    while (!Q.empty())
    {
        pair<int, int> x = Q.top();
        int v = x.second, w = x.first;
        Q.pop();
        if (mark[v])
            continue;
        mark[v] = 1;
        int len = s[v].size();
        for (int i = 0; i < len; i++)
        {
            if (dis[s[v][i].second] > w + s[v][i].first)
            {
                dis[s[v][i].second] = w + s[v][i].first;
                if (!mark[s[v][i].second])
                    Q.push({dis[s[v][i].second], s[v][i].second});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == v)
            continue;
        if (dis[i] > 10000000)
            cout << -1 << " ";
        else
            cout << dis[i] << " ";
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        dijkstra(n, m);
    }
}
