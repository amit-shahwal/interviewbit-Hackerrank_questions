#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

int m=apples.size();
int n=oranges.size();
int o=0;
int ap=0;
for(int i=0;i<m;i++)
{
    if((apples[i]+a)>=s && (apples[i]+a)<=t)
    ap++;
}
for(int i=0;i<n;i++)
{
    if((oranges[i]+b)>=s && (oranges[i]+b)<=t)
    o++;
}

cout<<ap<<endl<<o;



}