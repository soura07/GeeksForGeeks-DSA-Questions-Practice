class Solution
{
    public:
    /*You are required to complete this method*/
 int findK(int a[MAX][MAX],int n,int m,int k)
    {
         // Your code goes here.
         vector<int> v;
         int left=0, right=m-1;
         int top=0, bottom=n-1;
         while(left<=right && top<=bottom)
         {
            for(int i=left; i<=right; i++)
                 v.emplace_back(a[top][i]);
             top++;
             for(int i=top; i<=bottom; i++)
                 v.emplace_back(a[i][right]);
            right--;
            for(int i=right; i>=left; i--)
                 v.emplace_back(a[bottom][i]);
            bottom--;
            for(int i=bottom; i>=top; i--)
                 v.emplace_back(a[i][left]);
            left++;
         }
         return v[k-1];
    }
};
