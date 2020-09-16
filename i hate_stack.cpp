#include <bits/stdc++.h>
using namespace std;

stack<char> st;
stack<char> st2;
void kk()
{
    string str;
    cin>>str;
   for(int i=0;i<(int)str.size();i++)
   {
       if(!st.empty())
       {
           if(str[i]==st.top())
            st.pop();
           else{
            st.push(str[i]);
           }
       }
       else{
        st.push(str[i]);
       }

   }
    if(st.empty())
    {
        cout<<"KHALI"<<endl;
        return;

    }
    while(!st.empty())
    {
        st2.push(st.top());
     st.pop();
    }
     while(!st2.empty())
    {
       cout<<st2.top();
     st2.pop();
    }
	cout<<endl;
    str.clear();
    
}
int main()
{

    int t;

    cin>>t;

    for(int i=0;i<t;i++)
    kk();

}
