#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    int sum=0,count=0;
   
    cin>>n>>k;
    int kk;
    vector<int>task;
    for(int i=0;i<n;i++){
        cin>>kk;
        task.push_back(kk);}
    sort(task.begin(),task.end());
    if(task.size()==1)
    {
        cout<<1;
        return 0;
    }
    for(int i=0;i<n;i++)
    {   
    
        sum=sum+task[i];
        if(sum<=k)
        { 
     count++;}
        else
        {
            cout<<count;
        return 0;
        }
    }
        
    
    return 0;
}
