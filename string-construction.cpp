int stringConstruction(string s) {
map<char,int>freq;
for(int i=0;i<(int)s.size();i++)
freq[s[i]]++;
int t=distance(freq.begin(),freq.end());
return t;
}
