#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
  map < char, int > mp;
  string ss = "";
  int c = 1;
  int n = s.size();
  do {
    c = 1;
    for (int i = 0; i < n; i++) {
      if (i + 1 == n) {
        ss = ss + s[i];
        break;
      }
      if (s[i] == s[i + 1]) {
        i++;
        c = 0;
        continue;
      }
      ss = ss + s[i];

    }
    s.clear();
    s = ss;
    ss.clear();
    n = s.size();
  } while (c == 0);
  if (s == "")
    return "Empty String";
  return s;

}