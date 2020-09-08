#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
  // Return the minimum number of characters to make the password strong

  int ans = 0;
  int f1 = 1, f2 = 1, f3 = 1, f4 = 1;
  for (int i = 0; i < n; i++) {
    if (password[i] >= 'A' && password[i] <= 'Z') {
      if (f1 == 1)
        ans++;
      f1 = 0;
    }
    if (password[i] >= '0' && password[i] <= '9') {
      if (f2 == 1)
        ans++;
      f2 = 0;
    }
    if (password[i] >= 'a' && password[i] <= 'z') {
      if (f3 == 1)
        ans++;
      f3 = 0;
    }
    if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+') {
      if (f4 == 1)
        ans++;
      f4 = 0;
    }
  }
  cout << ans;
  if (n < 6) {
    if (4 - ans + n <= 6)
      return 6 - n;
    return 4 - ans;
  }
  return 4 - ans;

}