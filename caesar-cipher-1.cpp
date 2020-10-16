#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {

  int z;

  string str = "";
  for (int i = 0; i < (int) s.size(); i++) {
    if (isalpha(s[i])) {
      if (islower(s[i])) {
        z = s[i] - 'a';
        //cout<<z;
        char c = ((z + k) % 26) + 'a';
        str = str + c;
      }
      if (isupper(s[i])) {
        z = s[i] - 'A';
        //cout<<z;
        char c = ((z + k) % 26) + 'A';
        str = str + c;
      }

    } else
      str = str + s[i];

  }

  return str;
}