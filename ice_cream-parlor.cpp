vector<string> split_string(string);

// Complete the icecreamParlor function below.
vector<int> icecreamParlor(int m, vector<int> arr) {
  
    vector<int>ans;
    vector<int>arr2;
for(int i=1;i<=(int)arr.size();i++)
{
    int temp=m;
    int cc=arr[i-1];
   
   /// arr2.erase(v.begin()+i-1);
    if(cc<temp)
    {auto it=find(arr.begin()+i,arr.end(),temp-cc);
        if(it!=arr.end())
        {
            int tt=it-arr.begin()+1;
            ans.push_back(i);
            ans.push_back(tt);
            return ans;
            
        }
        else
        {
            continue;
        }
     }
    
}
return ans;
}