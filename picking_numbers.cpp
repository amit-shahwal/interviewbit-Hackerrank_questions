int pickingNumbers(vector<int> a) {
    map<int,int>arr;
    

    for(int i=0;i<a.size();i++)
    {
        arr[a[i]]++;
    }
    map<int,int> :: iterator it,ti;
    int ans=0,k=0,c=0;
    ti=arr.begin();
    for(it=arr.begin();it!=arr.end();it++)
    {   
        ti++;
        c++;
        if(ti==arr.end())
        {
            if(c==1)
            
            return it->second;
            if(k==49)
        return 50;
        return k; 
        }int a=it->first;
        int b=ti->first;
        int c=abs(a-b);
        if(c<=1)
        ans=it->second+ti->second;
        if(k<ans)
        k=ans;
    }
return it->second;
}