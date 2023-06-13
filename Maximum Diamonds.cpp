class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        long long diamonds=0;
        priority_queue<int>pq;
        for(int i=0; i<N; i++)
            pq.push(A[i]);
        while(K--){
            diamonds += pq.top();
            int temp = pq.top()/2;
            pq.pop();
            pq.push(temp);
        }
        return diamonds;
    }
};
