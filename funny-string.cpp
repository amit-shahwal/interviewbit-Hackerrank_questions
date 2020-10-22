#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
string r=s;
vector<int> si;
vector<int> ri;
int i;
reverse(r.begin(),r.end());
cout<<"r"<<r<<endl;
for(i=0;i<(int)s.size();i++)
{
    si.push_back(s[i]);
}
for(i=0;i<(int)r.size();i++)
{
    ri.push_back(r[i]);
}
if(si.size()!=ri.size())
return "Not Funny";
for(i=0;i<si.size();i++)
{   if((i+1)==si.size())
    break;
    int x=abs(si[i]-si[i+1]);
    int y=abs(ri[i]-ri[i+1]);
    if(x!=y)
    return "Not Funny";
}
return "Funny";
}
