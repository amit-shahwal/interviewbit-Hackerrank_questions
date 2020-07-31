#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the saveThePrisoner function below.
int saveThePrisoner(int N, int M, int S) {

// int k=m%n;
// //starting from s;
// int p=s-1;
// int ans=k+p;
// return ans;
if(!((M+S-1)%N))
return N;
        else 
return  (M+S-1)%N ;

}