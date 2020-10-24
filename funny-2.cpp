#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {

int i;


i=0;
int j=s.size()-1;
while(1)
{   if((i+1)==s.size())
    break;
    int x=abs(s[i]-s[i+1]);
    int y=abs(s[j]-s[j-1]);
    if(x!=y)
    return "Not Funny";
    i++;j--;
}
return "Funny";
}
