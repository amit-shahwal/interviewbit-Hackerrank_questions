#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
  int c = 0;
  int t = n;
  int l = 0;
  int p = 5;
  for (int i = 0; i < n; i++) {
    int k = p / 2; //first like

    c = c + k;
    p = k * 3;

  }
  return c;

}