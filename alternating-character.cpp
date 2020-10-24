#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
stack<char> st;
int alternatingCharacters(string s) {
for(int i=0;i<(int)s.size();i++)
{
    if(s[i]=='A' && st.empty())
    {
        st.push('A');
    }
     if(s[i]=='B' && st.empty())
    {
        st.push('B');
    } if(s[i]=='A' && st.top()=='B')
    {
        st.push('A');
    }
     if(s[i]=='B' && st.top()=='A')
    {
        st.push('B');
    }
    

}
int c=0;
int k=s.size();
while(!st.empty())
{
c++;
st.pop();
}
return k-c;
}
