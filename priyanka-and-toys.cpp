int toys(vector<int> w) {
int count=1;
sort(w.begin(),w.end());
int m1=*min_element(w.begin(),w.end());

int k=m1+4;
int i;
for( i=0;i<w.size();i++)
{
    if(w[i]<=k)
    continue;
    else{
    count++;
    k=4+(*min_element(w.begin()+i,w.end()));
    }
    
}
return count;
}