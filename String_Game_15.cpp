#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string st1;
    string st2;
        string st="";
    cin>>st1;
        cin>>st2;
    int size1=st1.size();
        int size2=st2.size();


    for(int i=0;i<size1;i++)
    {
      for(int j=0;j<size2;j++)
    {
        if(st1[i]!=st2[j])
            st=st+st2[j];
    }

        st2=st;
        st="";
        size2=st2.size();
    }
    cout<<st2;
    return 0;
}
