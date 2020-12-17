vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
map<int,int>f1;
map<int,int>f2;
vector<int>ans;
for(int i=0;i<(int)arr.size();i++)
f1[arr[i]]++;
for(int i=0;i<(int)brr.size();i++)
f2[brr[i]]++;

for(auto it=f2.begin();it!=f2.end();it++)
{
    auto itt=f1.find(it->first);
    if(itt!=f1.end())
    {
        if(it->second!=itt->second)
        ans.push_back(it->first);
    }
    else
    ans.push_back(it->first);
}
return ans;
}
