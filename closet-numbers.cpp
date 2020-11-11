vector<int> closestNumbers(vector<int> arr) {
    vector<int>ans;
sort(arr.begin(),arr.end());
int n=arr.size();
int diff[n];
adjacent_difference(arr.begin(),arr.end(),diff);
int min=*min_element(diff+1,diff+n);

for (int i=1;i<n;i++) {
    if (diff[i]==min)
    {
        ans.push_back(arr[i-1]);
        ans.push_back(arr[i]);
    } 
}
return ans;
}