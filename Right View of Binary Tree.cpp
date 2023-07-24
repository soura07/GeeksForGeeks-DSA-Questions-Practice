class Solution
{
    public:
    set<int>mp;
    vector<int>ans;
    void helper(Node*root , int level){
        if(root==NULL)return;
        if(mp.find(level)==mp.end()){
            ans.push_back(root->data);
            mp.insert(level );
        }
        helper(root->right , level+1);
        helper(root->left , level+1);
        return ;
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       helper(root , 0 );
       return ans;
    }
};
