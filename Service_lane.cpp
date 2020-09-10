#include <bits/stdc++.h>

using namespace std;

vector < string > split_string(string);

// Complete the serviceLane function below.
vector < int > serviceLane(int n, vector < vector < int >> cases, vector < int > width) {
  vector < int > t;
  int flag = 1;
  int ans;
  for (int i = 0; i < (int) cases.size(); i++) {
    //5 loops

    int k = cases[i][0];
    int l = cases[i][1];
    // cout<<"k="<<k<<"l="<<l;
    for (int z = k; z <= l; z++) {
      int min = width[z];

      if (flag == 1) {
        ans = min; //2ans=2,min=3
        flag++;
      } else {
        if (ans > min)
          ans = min;
      }
    }
    cout << ans;
    t.push_back(ans);
    flag = 1;

  }

  return t;

}