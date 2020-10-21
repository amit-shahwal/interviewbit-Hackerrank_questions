string pangrams(string s) {
// min o(N)
char ch;
string str="abcdefghijklmnopqrstuvwxyz";
for(int i=0;i<(int)s.size();i++)
{   if(str.size()==0)
    return "pangram";
    if(s[i]!=' ')
    {

        if(isupper(s[i]))
        ch=s[i] +32;
        else
        ch=s[i];
        int x=str.find(ch);
        if(x!=-1)
        str.erase(str.begin() +x);
    }   
}
if(str=="")
return "pangram";

    return "not pangram";
}
