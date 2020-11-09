#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {
int n=s.size()-1;
int c=0;
for(int i=0;i<(int)s.size()/2;i++)
{
    if(s[i]!=s[n-i])
    {
        int f=s[i];
        int st=s[n-i];
        c=c+abs(f-st);
    }

}
return c;
}
