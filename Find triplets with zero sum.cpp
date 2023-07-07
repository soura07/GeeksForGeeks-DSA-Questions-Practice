class Solution{
  public:
    bool findTriplets(int arr[], int n)
{ 
    sort(arr, arr + n);
    for(int i = 0; i < n; i++) {
        int low = i + 1, high = n - 1;
        while(low < high) 
            if(arr[low] + arr[high] < -arr[i])
                low++;
            else if(arr[low] + arr[high] > -arr[i])
                high--;
            else return true;
    }
    return false;
}   
};
