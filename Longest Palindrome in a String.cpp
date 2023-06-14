class Solution {
  public:
    string longestPalin (string S) {
        
         int n  = S.size();
        int maxlength = 1 , start = 0;
        int low , high;
        
        for(int i = 0; i < n; i++)
        {
            int low = i-1;
            int high = i+1;
            
            while(high < n && S[i] == S[high])
            high++;
            
            while(low >= 0 && S[i] == S[low])
            low--;
            
            while(high < n && low >= 0 && S[low] == S[high])
            {
                high++;
                low--;
            }
            
            int length = high - low -1;
            if(maxlength < length)
            {
                maxlength = length;
                start = low + 1;
            }
        }
        return S.substr(start , maxlength);
    }
};
