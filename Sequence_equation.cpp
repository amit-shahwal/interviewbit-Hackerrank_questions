#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the permutationEquation function below.
vector<int> permutationEquation(vector<int> p) {
vector <int> t;
int kk=p.size();
vector<int> :: iterator  it;
for(int i=1;i<=kk;i++)
{
    
it = find (p.begin(), p.end(), i);
int pos=it - p.begin() +1;

it = find (p.begin(), p.end(), pos);
int y=it - p.begin() +1;

t.push_back(y);
}
//t [5]
return t;

}