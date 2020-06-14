
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the lonelyinteger function below.
int lonelyinteger(vector<int> a) {
int sum=0;
for(int i=0;i<a.size();i++)
{
    sum=sum^a[i];
}
return sum;
}