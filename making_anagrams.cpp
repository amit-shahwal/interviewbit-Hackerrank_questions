int makingAnagrams(string s1, string s2) {
    int n;
    int c=s1.size()+s2.size();
    n=max((int)s1.size(),(int)s2.size());
    for(int i=0;i<(int)s1.size();i++)
    {
        int x=s2.find(s1[i]);
        if(x!=-1)
        {
            s2.erase(s2.begin()+x);
            c-=2;
        }
    }
return c;
}