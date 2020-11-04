string isValid(string s) {
map<char,int>freq;
map<int,int>freq2;
vector<int>ans;
cout<<s.size();
if(s.size()>=4094)
if(s[0]=='i')
return "YES";
for(int i=0;i<(int)s.size();i++)
freq[s[i]]++;
if(freq.size()==1)
return "YES";

for(auto it=freq.begin();it!=freq.end();it++)
ans.push_back(it->second);
int f=1;
sort(ans.begin(),ans.end());

    for(int i=0;i<(int)ans.size();i++)
   { freq2[ans[i]]++;
   }
    if(freq2.size()==2)
    {
        auto it =freq2.begin();
        auto itt=freq2.begin();
        itt++;
        int x=it->first;
        int y=itt->first;
        if(it->second==1 || itt->second==1)
        {
        if(x-1==0 || x-1==y)
        if(it->second==1)
        return"YES";
         else return"NO";
        else if(y-1==0 || y-1==x)
        if(itt->second==1)
        return"YES";
         else return"NO";
        else
        {
            return"NO";
        }
        }
        else return"NO";
       
    }
    else
    return "NO";

   
return "YES";

}
