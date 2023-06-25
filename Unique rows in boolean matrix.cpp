class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        vector<vector<int>> res;
        map<int, bool> mp;
        for(int i=0; i<row; i++){
            int ans = 0;
            for(int j=col-1; j>=0; j--){
                if(M[i][j] == 1)
                    ans += 1<<(j-col+1);
            }
            if(mp.find(ans) == mp.end()){
                vector<int> v;
                for(int j=0; j<col; j++){
                    v.push_back(M[i][j]);
                }
                res.push_back(v);
                mp[ans] = true;
            }
        }
        return res;
    }
};
