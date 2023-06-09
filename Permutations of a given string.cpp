class Solution
{
private:
    set<string> res;
    
    void perm(string processed, string orig) {
        if(orig.size() == 0) {
            res.insert(processed);
            return;
        }
        
        for(int i = 0; i < orig.size(); ++i) {
            string str = orig.substr(0, i) + orig.substr(i + 1);
            perm(processed + orig[i], str);
        }
    }

public:
	vector<string> find_permutation(string &S)
	{
	    perm("", S);
	    
	    vector<string> v;
	    
	    for(const string &s : res)
	        v.push_back(s);
	    
	    return v;
	}
};
