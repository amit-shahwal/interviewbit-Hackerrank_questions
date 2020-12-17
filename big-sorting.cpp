bool myfunction (string i,string j) 
{ 
    int n=i.length();
    int m=j.length();
    if(n==m)
        return (i<j);
    
    return n<m;   
}
// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> arr) {

sort(arr.begin(),arr.end(),myfunction);
return arr;
}
