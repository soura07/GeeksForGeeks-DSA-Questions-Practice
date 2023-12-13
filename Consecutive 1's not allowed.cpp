class Solution{
public:
	// #define ll long long
	ll mod=1e9+7;
	ll countStrings(int n) {
	    ll prev1=1,prev2=1;
	    while(n--){
	        ll num=(prev1+prev2)%mod;
	        prev1=prev2;
	        prev2=num;
	    }
	    return prev2;
	}
};
