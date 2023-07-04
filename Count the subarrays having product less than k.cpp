class Solution{
  public:
  int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       long long ans=0,pd=1;    
       for(int i=0;i<n;i++){
           pd=a[i];
           for(int j=i+1;j<n;j++){ 
             if(pd<k){
                 ans++;
                 pd*=a[j];
             }
             else break;
           }
           if(pd<k) ans++;
       }
       return ans;
    }
};
