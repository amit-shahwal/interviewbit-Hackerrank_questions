#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
int arr[20][20];
int visited[20][20];
int sizer;
int sizec;
bool check(int x, int y)
{
    if (x >= 0 && y >= 0 && x < sizer && y < sizec)
        return true;
    return false;
}

queue<pair<int, int>> q;

bool check(int x, int y);

void bfs(int a, int b)
{
    q.push(make_pair(a, b));
    visited[a][b] = 1;
    while (!q.empty())
    {
        auto mp = q.front();
        q.pop();
        int currx = mp.first;
        int curry = mp.second;
        if (check(currx, curry - 1) && visited[currx][curry - 1] == 0 && arr[currx][curry - 1] == 1)
        {
            q.push(make_pair(currx, curry - 1));
            visited[currx][curry - 1] = 1;
        }
        if (check(currx - 1, curry) && visited[currx - 1][curry] == 0 && arr[currx - 1][curry] == 1)
        {
            q.push(make_pair(currx - 1, curry));

            visited[currx - 1][curry] = 1;
        }
        if (check(currx + 1, curry) && visited[currx + 1][curry] == 0 && arr[currx + 1][curry] == 1)
        {
            q.push(make_pair(currx + 1, curry));
            visited[currx + 1][curry] = 1;
        }
        if (check(currx, curry + 1) && visited[currx][curry + 1] == 0 && arr[currx][curry + 1] == 1)
        {
            q.push(make_pair(currx, curry + 1));
            visited[currx][curry + 1] = 1;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    sizer = n;
    sizec = m;
    ll count = 0;
    fo(i, 0, n)
    {
        fo(j, 0, m)
        {
            cin >> arr[i][j];
        }
    }
    fo(k, 0, n)
    {
        fo(l, 0, m)
        {
            if (visited[k][l] == 0 && arr[k][l]==1)
            {
                bfs(k, l);
                count++;
            }
        }
    }

    cout<<count<<endl;
}
