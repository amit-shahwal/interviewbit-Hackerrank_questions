#include <bits/stdc++.h>

using namespace std;

vector < string > split_string(string);

// Complete the circularArrayRotation function below.
vector < int > circularArrayRotation(vector < int > a, int k, vector < int > queries) {

  vector < int > t;
  int i;
  //t.push_back(a.size());
  vector < int > ::iterator it;
  int kkk = a.size();
  for (i = 0, it = t.begin(); i < kkk; i++) {
    int kk = i + k;
    int pp = kk % (a.size());
    it = it + i;
    //  int res=a[i];
    t.insert(it, pp);
    it = t.begin();
  }
  vector < int > ans;
  int si = t.size();
  it = ans.begin();
  long long int arr[1000000];
  for (int i = 0; i < si; i++) {
    arr[t[i]] = a[i];
    // a ka 0 wale positin 2
    //ans 2= a[0];
  }
  for (int i = 0; i < si; i++) {
    ans.push_back(arr[i]);
  }

  int ki = queries.size();
  vector < int > mainans;
  for (int i = 0; i < ki; i++) {
    mainans.push_back(ans[queries[i]]);
  }
  return mainans;

}