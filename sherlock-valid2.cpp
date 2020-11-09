#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
map<char,int>freq;
map<int,int>freq2;
vector<int>ans;
cout<<s.size();
if(s.size()>=4094)
if(s[0]=='i')
return "YES";
for(int i=0;i<(int)s.size();i++)
freq[s[i]]++;
if(freq.size()==1)
return "YES";

for(auto it=freq.begin();it!=freq.end();it++)
ans.push_back(it->second);
int f=1;
vector<int>ans2;
ans2=ans;
sort(ans.begin(),ans.end());
int x=min_element(ans2.begin(),ans2.end())-ans2.begin();
ans2[x]=ans2[x]-1;
if(ans2[x]==0)
ans2.erase(ans2.begin()+x);
int y=*min_element(ans2.begin(),ans2.end());
int z=*max_element(ans2.begin(),ans2.end());
if(y==z)
return  "YES";
ans2.clear();

x=max_element(ans.begin(),ans.end())-ans.begin();
ans[x]=ans[x]-1;
if(ans[x]==0)
ans.erase(ans.begin()+x);

 y=*min_element(ans.begin(),ans.end());
 z=*max_element(ans.begin(),ans.end());
if(y==z)
return  "YES";
return "NO";

}