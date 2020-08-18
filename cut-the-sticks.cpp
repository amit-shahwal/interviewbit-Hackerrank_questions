vector < string > split_string(string);

// Complete the cutTheSticks function below.
vector < int > cutTheSticks(vector < int > arr) {

  vector < int > ans;
  vector < int > fans;
  int n = arr.size();
  int k = n;
  fans.push_back(k);

  int t = 0;
  while (n != 1) {
    int shortt = * min_element(arr.begin(), arr.end());
    int check = arr[0];
    for (int i = 0; i < n; i++) {
      if (i == n - 1) {
        if (check == arr[i])
          return fans;
      }
      if (check == arr[i])
        continue;
      if (check != arr[i])
        break;
    }

    for (int i = 0; i < n; i++) {

      arr[i] = arr[i] - shortt;
      if (arr[i] != 0) {
        ans.push_back(arr[i]);
      }

    }

    fans.push_back(ans.size());
    arr.clear();

    //return ans;    
    arr = ans;

    ans.clear();
    n = arr.size();

  }

  return fans;

}