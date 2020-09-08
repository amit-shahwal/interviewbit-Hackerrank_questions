#include <bits/stdc++.h>

using namespace std;

vector < string > split_string(string);

// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {

  int eaten = 0;
  int wrapper = 0;
  eaten = n / c;
  wrapper = eaten;

  while (wrapper >= m) {
    int eaten1 = wrapper / m;
    eaten = eaten + eaten1;
    int leftwrapper = wrapper % m;
    wrapper = eaten1 + leftwrapper;

  }
  return eaten;

}