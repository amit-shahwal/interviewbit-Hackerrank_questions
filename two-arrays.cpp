string twoArrays(int k, vector<int> A, vector<int> B) {
    int j;
sort(A.begin(),A.end());
sort(B.begin(),B.end(),greater<int>());
for(int i=0;i<(int)A.size();i++)
{
    for( j=0;j<(int)B.size();j++)
    {
        if(A[i]+B[j]<k)
        return "NO";
        else if(A[i]+B[j]>=k)
        break;
        
    }    
    B.erase(B.begin()+j);
}
return "YES";
}
