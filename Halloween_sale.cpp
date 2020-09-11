#include <bits/stdc++.h>

using namespace std;

vector < string > split_string(string);

// Complete the howManyGames function below.
int howManyGames(int p, int d, int m, int s) {
  // Return the number of games you can buy
  int kk = 0;
  int kl = 0;
  if (p == 1)
    return s;
  while (kk <= s)

  {
    if (p < m)
      p = m;
    kk = kk + p;
    //cout<<kk<<endl;
    cout << p << endl;
    if (p <= m)
      p = m;
    else
      p = p - d;

    kl++;

  }
  kl = kl - 1;
  return kl;

}