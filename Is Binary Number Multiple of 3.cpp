class Solution{
    public:
	int isDivisible(string s){
	    //complete the function here
	    int o = 0 , e = 0;
	    for(int i = 0 ; i < s.length() ; i++){
	        if(i%2 == 0 && s[i] == '1') e++;
	        else if(i%2 == 1 && s[i] == '1') o++;
	    }
	    return (abs(o-e)%3) == 0;
	}
};
