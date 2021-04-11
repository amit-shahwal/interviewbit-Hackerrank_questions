#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
vector<int>tt[1000000];
int visited[1000000];
queue<int>q;
 long long int bfs(int s)
 { long long  int count=0;
     q.push(s);
     visited[s]=1;
     while(!q.empty())
     {
         int curr=q.front();
         q.pop();
         count++;
         for(int i=0;i<tt[curr].size();i++)
         {
             if(visited[tt[curr][i]]==0)
             {
                 q.push(tt[curr][i]);
                visited[tt[curr][i]]=1;
             }
         }
     }
     return count;
     
     
 }


// Complete the roadsAndLibraries function below.
long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities) {

for(int i=0;i<=n;i++)
visited[i]=0;
for(int i=0;i<cities.size();i++)
{
    tt[cities[i][0]].push_back(cities[i][1]);
    tt[cities[i][1]].push_back(cities[i][0]);
}
long long int total=0;
for(int i=1;i<=n;i++)
{
    if(visited[i]==0)
    {
        long long int cc=bfs(i)-1;
        cout<<cc;
        total+=(long long int)(cc*c_road)+c_lib;
        
        
    }
}
long long int k=(long long int)n*c_lib;
if(k<total)
return k;
return total;

}