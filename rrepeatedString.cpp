#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
int t=0;
int p=0;
 long ans;
if(s=="a")
return n;
int k=s.size();
for(int i=0;i<k;i++)
{
    
    if(s[i]=='a')
    t++;
}
long z= n/k;
ans=z*t;
int r=n%k;
for(int i=0;i<r;i++){
if(s[i]=='a')
p++;
}
return ans+p;


}