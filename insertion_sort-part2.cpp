#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void printarr(vector<int> arr,int n)
{
    for(int kk=0;kk<n;kk++)
    cout<<arr[kk]<<" ";
    cout<<endl;
}
// Complete the insertionSort2 function below.
void insertionSort2(int n, vector<int> arr) {

  for (int i = 1; i < n; i++) {
        int j = i;
        int value = arr[i];
        while (j >= 1 && arr[j-1] > value) {
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = value;
        printarr(arr,n);
    }      



}
