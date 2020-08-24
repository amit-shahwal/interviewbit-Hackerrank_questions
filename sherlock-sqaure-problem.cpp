#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the squares function below.
int squares(int a, int b) {
int count=0;
int aa=sqrt(a);
int bb=sqrt(b);
for(int i=aa;i<=bb;i++)
{
    int p=i*i;
  //  cout<<" "<<p;
    if(p>=a && p<=b)
    {count++;}
}
return count;

}