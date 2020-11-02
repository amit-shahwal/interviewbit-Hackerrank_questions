string twoStrings(string s1, string s2) {

for(int i=0;i<(int)s1.size();i++)
{
    int x=s2.find(s1[i]);
    if(x!=-1)
    return "YES";
}
return "NO";
}
