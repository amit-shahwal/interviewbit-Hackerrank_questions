#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back

#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
vector<int> p[1000000];
queue<int> q;
int dis[1000000];
int visited[1000000];
//int distance[10000];
void bfs(int s)
{
    visited[s] = 1;

    q.push(s);
    dis[s] = 0;
    while (!q.empty())
    {

        int current = q.front();
        q.pop();
        //  fo(j,0,p[current].size())
        for (long long int j = 0; j < p[current].size(); j++)

        {
            int newelement = p[current][j];
            if (visited[newelement] == 0)
            {
                q.push(newelement);
                dis[newelement] = dis[current] + 1;
                visited[newelement] = 1;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    fo(i, 0, n - 1)
    {
        int x, y;
        cin >> x >> y;
        p[x - 1].pb(y - 1);
        p[y - 1].pb(x - 1);
    }
    fo(k, 0, n - 1)
    {
        if (visited[k] == 0)
            bfs(k);
    }
    int maxElementIndex = max_element(dis, dis + n) - dis;
    memset(dis, 0, sizeof(dis));
    memset(visited, 0, sizeof(visited));

    bfs(maxElementIndex);

    cout << *max_element(dis, dis + n);
}