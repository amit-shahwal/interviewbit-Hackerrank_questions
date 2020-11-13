int workbook(int n, int k, vector<int> arr) {

 int pg = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        pg++;
        int st = 1;
        int f = arr[i];

        while (1)

        {
            if (st == pg)
                c++;
            if (st == arr[i])
                break;
            if (st % k == 0)
            {
                pg++;
                st++;
            }
            else
            {
                st++;
            }
        }
    }
return c;
}
