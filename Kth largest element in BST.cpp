class Solution
{
    public:
    void inorder(Node*root,vector<int>&in){
        if(!root) return;
        inorder(root->left,in);
        in.push_back(root->data);
        inorder(root->right,in);
    }
    
    int kthLargest(Node *root, int K)
    {
        vector<int>inor;
        inorder(root,inor);
        int n = inor.size();
        return inor[n-K];
    }
};
