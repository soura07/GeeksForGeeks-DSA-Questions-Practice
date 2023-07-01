class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int counter = 0;
        while(N != 0){
            counter += N & 1;
            N >>= 1;
        }
        return counter;
    }
};
