vector<string> split_string(string);

// Complete the bfs function below.
vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {
  int dis[1000000] ; 
  int visited[1000000];
    vector<int>tt[1000000];
    queue<int> q;
    for (int i=1; i<=n; i++) 
    {dis[i]=0; visited[i]=-1;}
    
for(int i=0;i<edges.size();i++)
{
    tt[edges[i][0]].push_back(edges[i][1]);
    tt[edges[i][1]].push_back(edges[i][0]);
    
}

visited[s]=1;
q.push(s);
while (!q.empty()) {
int curr=q.front();

q.pop();
for(int i=0;i<tt[curr].size();i++)
{   if(visited[tt[curr][i]]==-1)
{
    dis[tt[curr][i]]=dis[curr]+6;
    q.push(tt[curr][i]);
    visited[tt[curr][i]]=1;
}

}
}

vector<int>t;
for(int i=1;i<=n;i++)
{   if(i==s)
    continue;
    if(dis[i]==0)
    t.push_back(-1);
    else {
        t.push_back(dis[i]);
    }
}
return t;

}
