class Solution
{
    public:
      void Rearrange(int arr[], int n)
        {
            vector<int>neg,pos;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)neg.push_back(arr[i]);
                else pos.push_back(arr[i]);
            }
            for(int i=0;i<n;i++)
            {
                if(i<neg.size())arr[i]=neg[i];
                else arr[i]=pos[i-neg.size()];
            }
        }
};
