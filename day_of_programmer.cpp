//day of programmer
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
string str1;
string ans;

if(year>=1700 && year <= 1917)
{
    

    string stry= to_string(year);
    str1=stry;
    if(year%4==0)
    {
    ans="12.09."+str1;}
else
{ans="13.09."+str1;}
    return ans;

}
else if(year>1918)
{
   
    string stry= to_string(year);
    str1=stry;
     if((year%400==0) ||(year%4==0 && year%100!=0))
   { ans="12.09."+str1;}
    else
    
    {ans="13.09."+str1;}
    return ans;
}

string k;
k="26.09.1918";
return k;
}
