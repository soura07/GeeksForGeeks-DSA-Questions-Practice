class Solution{
    public:
  int setSetBit(int x, int y, int l, int r){
        y=y>>(l-1);
        while(l<=r){
            int mask=1&y;
            mask=mask<<(l-1);
            x = x|mask;
            y=y>>1;
            l++;
        }
        return x;
    }
};
