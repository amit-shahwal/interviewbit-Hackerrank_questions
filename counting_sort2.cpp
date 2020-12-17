vector<int> countingSort(vector<int> arr) {

int ma=*max_element(arr.begin(),arr.end());
vector<int> ans(ma+1);
vector<int> ans2;
for(int j:arr)
{
    ans[j]++;
}
for (int k=0;k<(int)ans.size();k++)
{
   int kk=ans[k];
   while(kk)
   {
       ans2.push_back(k);
       kk--;
   }
}
return ans2;

}