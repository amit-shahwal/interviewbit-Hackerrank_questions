//lower bound stl
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int m, num;
   cin >> m;
   vector<int> v;

   for (int i=0; i<m; i++)
   {
       cin >> num;
       v.push_back(num);
   }
   int n, val;
   cin >> n;
   vector<int>::iterator low;
   for (int i=0; i<n; i++)
   {
       cin >> val;
       low = lower_bound(v.begin(), v.end(), val);
       if (v[low - v.begin()] == val)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
   }
    return 0;
}
