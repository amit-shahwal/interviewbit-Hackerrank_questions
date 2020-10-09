#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back

#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
vector<pair<int, int>> p[100];
int dist[100];
int visited[100];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
void dij(int a, int b)
{ //a ---distance
    q.push(make_pair(a, b));

    visited[b] = 1;
    dist[b] = a;
    while (!q.empty())
    {
        auto m = q.top();
        q.pop();
        int discurr = m.first; //0
        int currb = m.second;  //1
        visited[m.second]=1;
        fo(i, 0, p[currb].size())
        {
            auto mm = p[currb][i];
            int distancecurrent = mm.first;
            if ((distancecurrent + discurr < dist[mm.second]) && visited[mm.second] == 0)
            {
                dist[mm.second] = distancecurrent + discurr;
                q.push(make_pair(distancecurrent + discurr, mm.second));
                
                
            }
        }
    }
}
int main()
{
    int n, m, x, y, dis;
    cin >> n >> m;
    fo(i, 0, n)
    {
        cin >> x >> y >> dis;
        p[x].pb(make_pair(dis, y));
        p[y].pb(make_pair(dis, x));
    }
    foe(j, 1, m)
    {
        dist[j] = INT_MAX;
    }
    dij(0, 1);
    cout<<dist[3]<<endl;
}