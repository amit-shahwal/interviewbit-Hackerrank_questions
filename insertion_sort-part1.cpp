#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the insertionSort1 function below.
void insertionSort1(int n, vector<int> arr) {
int rep=arr[n-1];
int flag=1;
    for(int i=n-1;i>=0;i--)
{       
        if(i!=0){

        if(arr[i-1]<rep)
{            arr[i]=rep;
            flag=0;
 for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
        return;
}
        else if(arr[i]>=rep)
            arr[i]=arr[i-1];
        }
        if(i==0 && flag==1)
        arr[0]=rep;

       
    for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
        cout<<endl;


}

}