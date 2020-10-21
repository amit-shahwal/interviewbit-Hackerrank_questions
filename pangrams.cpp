#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
map<char,int> freq;
int count=0;
char ch;
for(int i=0;i<(int)s.size();i++)
{   if(s[i]!=' ')
{if(isupper(s[i]))
     ch=s[i] + 32;
    else ch=s[i];
    freq[ch]++;
}

}
auto it=freq.begin();
for(it=freq.begin();it!=freq.end();it++)
{
    count++;
}
if(count==26)
return "pangram";
return "not pangram";
}
