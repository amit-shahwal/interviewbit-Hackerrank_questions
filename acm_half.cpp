for(int i=0;i<t;i++)
{

    for(int j=i+1;j<t;j++)
    {   str="";
        int k=topic[i].size();
      
        for(int q=0;q<k;q++)
        {
            if(topic[i][q]== '1' || topic[j][q] == '1')
            str=str+"1";
            else{
                str=str+"0";
            }
        }
        cout<<str<<endl;
        pr=str.size();
    
        for(int ll=0;ll<pr;ll++)
        {
            if(str[ll] == '1')
            zz++;
        }
        
            ans.push_back(zz);
           // return ans;
           zz=0;

    }

}
//return ans;
int min=*max_element (ans.begin(), ans.end());
int rrr=0;
int as=ans.size();
for(int i=0;i<as;i++)
{
    if(ans[i]==min)
    rrr++;
}
fans.push_back(min);
fans.push_back(rrr);



return fans;

