void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i=1;i<N;i++)
    {
        value=arr[i];
        j=i;
        while(j>0 && value<arr[j-1])
        {
            arr[j]=arr[j-1];
            j=j-1;
        }
        arr[j]=value;
    }
    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}