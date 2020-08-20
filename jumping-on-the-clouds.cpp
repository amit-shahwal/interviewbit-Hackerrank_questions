#include <bits/stdc++.h>

using namespace std;

vector < string > split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector < int > c, int k) {
  int t = 100;
  int n = c.size();
  for (int i = 0; i <= n; i++) {
    int r = (i + k) % n;
    if (r == 0) {
      if (c[0] == 1)
        return t - 2 - 1;
      return t - 1;
    }
    i = r - 1;
    if (c[r] == 1) {
      t = t - 1 - 2;
    } else {
      t--;
    }

  }
  return t;

}