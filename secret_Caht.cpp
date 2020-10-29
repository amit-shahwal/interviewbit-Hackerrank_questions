#include<bits/stdc++.h>
using namespace std;
string str;
bool comp(int i,int j){
    return (str[i]!=str[j])? str[i]>str[j]: i<j;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int t,n,i,arr[100000];
     cin>>t;
     while(t--){
        cin>>str;
         cin>>n;
        n--;
        for(i=0;str[i]!='\0';i++)  
            arr[i]=i;
        sort(arr,arr+i,comp);
        //cout<<n;
        for(i=0;str[i]!='\0';i++,n=arr[n])
        {//cout<<arr[n];
        cout<<str[n];
        }cout<<endl;
     }
    return 0;
}
