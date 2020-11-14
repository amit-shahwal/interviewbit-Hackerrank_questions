string gameOfThrones(string s) {
map<char,int>freq;
for(int i=0;i<(int)s.size();i++)
freq[s[i]]++;
int c=1;
for(auto it=freq.begin();it!=freq.end();it++)
{
    if(it->second%2!=0)
    {
        if(c==1)
        c++;
        else
        return "NO";
    }
}
return "YES";

}