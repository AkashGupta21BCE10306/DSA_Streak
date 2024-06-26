class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
         vector<int> ans;
        stack<pair<char , int>> st;
        int count = 1;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '(')
            {
                st.push({'(' , count});
                ans.push_back(count);
                count++;
            }
            if(str[i] == ')')
            {
                ans.push_back(st.top().second);
                st.pop();
            }
        }
        return ans;
    }
};