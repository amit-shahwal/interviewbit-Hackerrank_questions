#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
vector<int>tt[1000000];
int visited[1000000];
int tocheck[1000000];
vector<int>same;
queue<int>q;
long long int bfs(int s)
{   int count=0;

    q.push(s);
    while (!q.empty()) {
        int curr=q.front();
        q.pop();
        count++;
        for(int i=0;i<tt[curr].size();i++)
        {
            if(visited[tt[curr][i]]==-1)
            {    
                visited[tt[curr][i]]=1;
                q.push(tt[curr][i]);
                
            }
        }
    
    
    
    }
    return count;
}

// Complete the journeyToMoon function below.
long long int journeyToMoon(int n, vector<vector<int>> astronaut) {
 //long int ans=n*(n-1)/2;
 long long int ans=(long long int)(n-1)*n/2;
for(int i=0;i<=n;i++)
{visited[i]=-1;tocheck[i]=0;}
for(int i=0;i<astronaut.size();i++)
{
    tt[astronaut[i][0]].push_back(astronaut[i][1]);
    tt[astronaut[i][1]].push_back(astronaut[i][0]);
    tocheck[astronaut[i][0]]=1;
    tocheck[astronaut[i][1]]=1;
}
  
for(int i= 0;i<n;i++)
{
    if(visited[i]==-1 && tocheck[i]==1)
    {    visited[i]=1;
 
        long long int cc=bfs(i);
       
        ans-= (cc*(cc-1))/2; 
      
    
    }
}
//cout<<ans;
return ans;
}

int main()
{
 int n,k;
 cin>>n;
 cin>>k;
 vector<vector<int>> tt;
 vector<int>t;
 for(int i=1;i<=k;i++)
 {int x,y;
 cin>>x>>y;
 t.push_back(x);
 t.push_back(y);
 tt.push_back(t);
 t.clear();
 
     
 }
 cout<<journeyToMoon(n,tt);
 
}
