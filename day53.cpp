class Solution
{
    public:
Node* create(int in[],int pre[],int n,int &index,int startIndex,int endIndex,map<int,int>&valueToIndex)
    {
        //base case
        if(index<0 || startIndex>endIndex)
        return NULL;
        
        
        int element=pre[index--];
        Node*temp=new Node(element);
        int position=valueToIndex[element];
        
        temp->right=create(in,pre,n,index,position+1,endIndex,valueToIndex);
        temp->left=create(in,pre,n,index,startIndex,position-1,valueToIndex);
        
        return temp;
    }
    void createMap(int in[],int n,map<int,int>&valueToIndex)
    {
        for(int i=0;i<n;i++)
        {
            valueToIndex[in[i]]=i;
        }
    }
Node *buildTree(int in[], int post[], int n) {
    // Your code here
     int postorderIndex=n-1;
        map<int,int>valueToIndex;
        createMap(in,n,valueToIndex);
        
        Node*ans=create(in,post,n,postorderIndex,0,n-1,valueToIndex);
        
        return ans;
}
};