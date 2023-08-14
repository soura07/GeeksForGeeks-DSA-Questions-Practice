class Solution
{
public:
 vector<int> singleNumber(vector<int> nums) {
        int x=0;
        for(int i=0; i<nums.size(); i++)
        x=x^nums[i];
        int temp=1;
        while((temp&x)==0)
        temp*=2;
        int num1,num2;
        num1=num2=0;
        for(int i=0; i<nums.size(); i++){
            if((temp&nums[i])==0)
            num1^=nums[i]; //2 2 4
            else 
            num2^=nums[i]; //1 3 1
        }
        vector<int>v(2);
        v[0]=num1;
        v[1]=num2;
        sort(v.begin(), v.end());
        return v;
    }
};
