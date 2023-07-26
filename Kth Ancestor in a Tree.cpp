Node* givenNode= new Node;
void getParents(Node *root, unordered_map<Node *, Node *> &parent,int target)
{
    if (root == NULL)
        return;

    if(root->data== target)
    givenNode= root;
    if (root->left)
    {
        getParents(root->left, parent,target);
        parent[root->left] = root;
    }
    if (root->right)
    {
        getParents(root->right, parent,target);
        parent[root->right] = root;
    }
    return;
}

int kthAncestor(Node *root, int k, int node)
{
    // Code here
    unordered_map<Node *, Node *> parent;
    parent[root]=NULL;
    getParents(root, parent,node);
    int cnt=0;
    while (givenNode && cnt <k)
    {
       givenNode = parent[givenNode];
        cnt++;
    }
    if(!givenNode)
    return -1;
    return givenNode->data;
}
