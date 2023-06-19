class Solution{
    public:
    void arrange(long long arr[], int n) {
        int m = 1e9 + 7;  // prime
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] + (arr[arr[i]]%m) * m;
                         // old          // new
        }
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i]/m;
        }
    }
};
