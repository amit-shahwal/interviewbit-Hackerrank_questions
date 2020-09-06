#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
int flag=0;
for(long int i=p;i<=q;i++){
        long int sum;
        long int a = 0;
        long int k = i;
        while(k>0){
            k/=10 ; 
            ++a;
        }
       long int p = i * i;
        long int g = pow(10,a);
        long int r=p%g;
        long int l=p/g;
        sum =r+l;
        if(sum == i){
            // printf("%ld ",sum);
            cout<<sum<<" ";
            flag++;
        }
    }
    if(flag == 0)
        printf("INVALID RANGE");



}
