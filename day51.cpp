class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void inOrder(Node *root, vector<int> &ans){
        if(root == NULL){
            return;
        }
        inOrder(root->left, ans);
        ans.push_back(root->data);
        inOrder(root->right, ans);
        return;
    }
    
    vector<int> serialize(Node *root) 
    {
        vector<int> ans;
        inOrder(root, ans);
        return ans;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       Node* newRoot = new Node(-1);
       Node *temp = newRoot;
       for(int i = 0; i < A.size(); i++){
           temp->right = new Node(A[i]);
           temp = temp->right;
       }
       return newRoot->right;
    }

};