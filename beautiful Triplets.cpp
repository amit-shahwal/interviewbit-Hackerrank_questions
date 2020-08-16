#include <bits/stdc++.h>

using namespace std;

vector < string > split_string(string);

// Complete the beautifulTriplets function below.
int beautifulTriplets(int d, vector < int > arr) {
  int n = arr.size();
  int k;
  int t;
  int j;
  int count = 0;
  for (int i = 0; i < n; i++) {
    k = arr[i] + d;
    for (j = i + 1; j < n; j++) {
      if (k == arr[j]) {
        t = k + d;
        break;
      }

    }
    for (int z = j + 1; z < n; z++) {
      if (t == arr[z]) {
        count++;
      }
    }

  }
  return count;
}