// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int diff[n];
    adjacent_difference(arr.begin(),arr.end(),diff);
    int min=*min_element(diff+1,diff+n);
    return min;


}
