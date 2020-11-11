string balancedSums(vector<int> arr) {
    int sum = 0;
        int left = 0;
        for(int su : arr){
            sum += su;
        }
        for(int fu : arr){
            if(2*left == sum - fu){
                return "YES";
            }else{
                left += fu;
            }
        }
        return "NO";
}
