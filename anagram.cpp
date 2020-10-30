int anagram(string s) {
string s1="",s2="";
    int n=s.size();
if(n%2!=0)
return -1;
for(int i=0;i<n/2;i++)
s1+=s[i];
for(int j=n-1;j>=n/2;j--)
s2+=s[j];
int c=n/2;

for(int i=0;i<(int)s1.size();i++)
{
    int x=s2.find(s[i]);
    if(x!=-1)
    {
        c--;
        s2.erase(s2.begin()+x);
    }
}
return c;
}
