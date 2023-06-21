class Solution {
  public:
    int sumOfNaturals(int n) {
        return (((long)n * (long)(n + 1)) % (long)(1e9+7) * (long)500000004)%(long)(1e9+7);
    }
};
