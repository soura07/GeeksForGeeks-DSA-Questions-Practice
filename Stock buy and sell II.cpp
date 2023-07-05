class Solution {
  public:
   int stockBuyAndSell(int n, vector < int > & prices) {
  long long data[n][2];
  data[0][0] = -prices[0];
  data[0][1] = 0;
  for (long long i = 1; i < n; i++) {
    data[i][0] = max(data[i - 1][0], data[i - 1][1] - prices[i]);
    data[i][1] = max(data[i - 1][1], data[i - 1][0] + prices[i]);
  }

  return data[n - 1][1];

}

};
