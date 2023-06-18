class Solution {
  public:
   int distributeTicket(int N, int K) {
        // code here
        vector<int> arr;
        int x=1;
        while(x<=N){
            arr.push_back(x);
            x++;
        }
        int i=0;
        int j=N;
        int step=0;
        int flag=0;
        while(i+1!=j){
            
            if(step%K==0 && step!=0){
                if(flag==0) flag=1;
                else flag=0;
            }
            if(flag==0){
                i++;
            }
            else{
                j--;
            }
            
            step++;
        }
        // if(flag==1) i=j;
        return arr[i];
    }
};
