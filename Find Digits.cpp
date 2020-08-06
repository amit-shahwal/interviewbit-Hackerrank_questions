#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
  int k = n;
  int t, r;
  int count = 0;
  while (k != 0) {
    t = k % 10;
    if (t != 0) {
      r = n % t;
      if (!r) {
        count++;
      }
    }
    //count++;
    k = k / 10;

  }

  return count;

}