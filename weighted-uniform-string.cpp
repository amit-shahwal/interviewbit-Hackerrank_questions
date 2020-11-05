#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
vector<long long int>t;
vector<string>ans;
map<char, int>freq;
char prev='a';
int pp=0; 
for( int i=0;i<(int)s.size();i++)
{
    int z=s[i]-'a'+1;
    if(s[i]==prev)
    {
        pp++;
        z=z*pp;
    
    }
     else pp=1;
        prev = s[i];
   
    t.push_back(z);
}
for(int i=0;i<(int)queries.size();i++)
{
   auto itt = find (t.begin(), t.end(), queries[i]);
   if(itt!=t.end()) 
   ans.push_back("Yes");
   else
   ans.push_back("No");

}

return ans;