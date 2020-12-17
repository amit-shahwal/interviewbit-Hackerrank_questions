int flatlandSpaceStations(int n, vector<int> c) {
int min4=0;
int min2,min3;
vector<int>ans;
for(int i=0;i<n;i++)
{
min3=abs(i-c[0]);
for(int j:c)
{
     min2=abs(i-j);
     min3=min(min2,min3);
}
ans.push_back(min3);
}
int zz=*max_element(ans.begin(),ans.end());
return zz;

}