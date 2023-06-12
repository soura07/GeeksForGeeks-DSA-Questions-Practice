class Solution{
  public:
    int cutRod(int price[], int n) {
        //to get the length array like {1,2,3,4,5,6,7,8,9,10} like that
        int length[n+1];
        for(int i=1;i<=n;i++){
            length[i-1]=i;
        }
        int t[n+1][n+1];
        for(int i=0;i<n+1;i++){
            t[0][i]=0;
            t[i][0]=0;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(length[i-1]<=j)
                t[i][j]=max(price[i-1]+t[i][j-length[i-1]],t[i-1][j]);
                else
                t[i][j]=t[i-1][j];
            }
        }
        return t[n][n];
    }
};
