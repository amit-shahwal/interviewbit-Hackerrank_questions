#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the fairRations function below.
int fairRations(vector<int> B) {
    int c=0,c2=0;
    
for(int i=0;i<(int)B.size();i++)
{
    if(i+1==(int)B.size())
    break;
    if(B[i]%2!=0)
    {
        B[i]+=1;
        B[i+1]+=1;
        c+=2;

    }

}
for(int i=0;i<(int)B.size();i++)
{
    if(i+1==(int)B.size())
    break;
    if(B[i]%2!=0)
    {
        B[i]+=1;
        B[i-1]+=1;
        c2+=2;

    }

}
for(int i=0;i<(int)B.size();i++)
{
    if(B[i]%2!=0)
    return -1;

}
if(c>c2)
return c;
return c2;
}
