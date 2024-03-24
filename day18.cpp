//Insert an Element at the Bottom of a Stack
#include<iostream>
using namespace std;
class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x)
    {
        int n=st.size();
        vector<int>ans;
        while(st.size())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        st.push(x);
       
       for(int i=ans.size()-1;i>=0;i--)
       {
           st.push(ans[i]);
           
       }
        return st;
        
 }
};