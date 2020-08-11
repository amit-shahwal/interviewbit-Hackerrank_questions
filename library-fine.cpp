#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {

if(y1==y2 && m1==m2 && d1>d2)
return (15*(d1-d2));
if(y1!=y2 && y1>y2)
return 10000;
if(y1!=y2 && y2>y1)
return 0;
if(m1!=m2 && m1>m2)


    return (m1-m2)*500;
if(m1!=m2 && m1<m2)

return 0;


return 0;

}