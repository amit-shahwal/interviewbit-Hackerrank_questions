#include <bits/stdc++.h>

using namespace std;

vector < string > split_string(string);

// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
  int count = 0;
  int p, r;
  for (int l = i; l <= j; l++) {
    string str = to_string(l);
    reverse(str.begin(), str.end());
    int r = stoi(str);
    int kk = abs(r - l);

    if (kk % k == 0)
      count++;
  }

  return count;
}