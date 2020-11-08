int runningTime(vector<int> arr) {
int val;
int c=0;
int i,j;
for(i=1;i<(int)arr.size();i++)
{
    val=arr[i];
    j=i;
    while(j>0 && val<arr[j-1])
    {
        arr[j]=arr[j-1];
        j=j-1;
        c++;
    }
    arr[j]=val;

}
return c;
}