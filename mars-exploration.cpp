#include <bits/stdc++.h>

using namespace std;
stack<char> st;
// Complete the marsExploration function below.
int marsExploration(string s) {
int c=0;

for(int i=0;i<(int)s.size();i=i+3)
{
       
        if(s[i]!='S')
        c++;

    
    
        if(s[i+1]!='O')
        c++;
        if(s[i+2]!='S')
        c++;

}

return c;
}
