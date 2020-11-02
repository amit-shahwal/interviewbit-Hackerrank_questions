void separateNumbers(string s) {
  string str,kk;
  for(int i=1;i<=(int)s.size()/2;i++)
    {
        str=kk=s.substr(0,i);
        int j=1;
        while(kk.size()<s.size())
        {
           kk+= to_string(stol(str) + j);
           j++;
        }
        if(s==kk)
        {
            cout<<"YES "<<str<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
        return;
}
