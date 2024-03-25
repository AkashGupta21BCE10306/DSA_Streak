//Print N-bit binary numbers having more 1s than 0s
#include<iostream>
using namespace std;
class Solution{
public:	 
void solve(int ind, int n, int one, int zero, vector<string>&ans, string s)
    {
        if(ind==n){
            if(one >= zero){
                ans.push_back(s);
            }
            return;
        }
        if(one < zero){
            return;
        }
        solve(ind+1, n, one+1, zero, ans, s+'1');
        solve(ind+1, n, one, zero+1, ans, s+'0');
    }

	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	        vector<string>ans;
	        string s="";
	        solve(0, n, 0, 0, ans, s);
            sort(ans.begin(), ans.end());
            reverse(ans.begin(), ans.end());
            return ans;
	    
	}
};