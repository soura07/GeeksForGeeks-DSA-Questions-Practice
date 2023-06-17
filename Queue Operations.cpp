class Solution{
   public:
   map<int,int>m;
   void insert(queue<int> &q, int k){
     q.push(k);
     m[k]++;
   }
   
   int findFrequency(queue<int> &q, int k){
       return (m[k] == 0)? -1 : m[k];
   }
};
