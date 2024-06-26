//Sum of all substrings of a number
class Solution
{
    public:
    
    long long sumSubstrings(string s){

        const long long int mod = 1e9+7;

        int n =s.size();

        long long int ans=0;

        long long int prev=s[0]-'0';

        long long int next;

        ans+=prev;

        for(int i=1; i<n; i++){

            next=(i+1)*(s[i]-'0')+10*prev;

            next%=mod;

            ans+=next;

            ans%=mod;

            prev=next;

        }

        return ans;

    }


};