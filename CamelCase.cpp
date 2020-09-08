#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
int c=1;
for(int i=0;i<s.size();i++)
{
    if(s[i]>='A' && s[i]<='Z')
    c++;
}
return c;
}
