string biggerIsGreater(string w) {
map<char,int> freq;
for (int i=0; i<(int)w.size(); i++) 
freq[w[i]]++;

if(freq.size()==1)
return "no answer";
string s=w;
next_permutation(w.begin(), w.end());
if(w[0]<s[0])
return "no answer";
return w;
}