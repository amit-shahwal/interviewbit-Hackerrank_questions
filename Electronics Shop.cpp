//Electronics Shop

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
  int n = keyboards.size();
  int m = drives.size();
  int sum;
  int ans = 0;
  ;
  int k = -1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      sum = keyboards[i] + drives[j];
      if (sum <= b)
      {
        ans = sum;
        if (ans > k)
          k = ans;
      }
    }
  }
  return k;
}