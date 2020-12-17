vector<int> countingSort(vector<int> arr) {
int ma=*max_element(arr.begin(),arr.end());
vector<int> ans(ma+1);
vector<int> ans2;
for(int j:arr)
{
    ans[j]++;
}
for(int k: ans)
ans2.push_back(k);
return ans2;
}
