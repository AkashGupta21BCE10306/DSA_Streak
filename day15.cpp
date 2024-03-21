//ZigZag Tree Traversal
#include<iostream>
using namespace std;
class Solution{
    public:
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> ans;
        queue<Node *> que;
        bool flag = false;
        
        que.push(root);
        
        while(!que.empty()){
            vector<int> buffer;
            int sz = que.size();
            
            for(int i = 0; i < sz; i++){
                Node *front = que.front();
                que.pop();
                buffer.push_back(front->data);
                
                if(front->left) que.push(front->left);
                if(front->right) que.push(front->right);
            }
            if(flag) reverse(buffer.begin(), buffer.end());
            flag = !flag;
            
            ans.insert(ans.end(), buffer.begin(), buffer.end());
        }
        return ans;
    }
};

