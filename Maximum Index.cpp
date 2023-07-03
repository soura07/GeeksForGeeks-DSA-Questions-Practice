class Solution{
public:
   int maxIndexDiff(int arr[], int n) {
        // code here
        int res = 0;
        int c = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1]){
                c++;
            }
        }
        if(c==n-1) return 0;
        
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                if(j-i < res) break;
                
                if(arr[i] > arr[j]) continue;
                
                res = max(res,j-i); break;
            }
        }
        return res;
    }

};
