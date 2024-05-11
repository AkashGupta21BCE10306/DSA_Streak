class Solution {
  public:
    int minSteps(int d) {
        int currSum = 0;
        int ans = 0;
        for(int i=1;true;i++){
            if(currSum < d){
                currSum+=i;
            }
            else{
                if((currSum - d)%2 == 0){
                    return ans;
                }
                else{
                    currSum+=i;
                }
            }
            ans++;
        }
        return -1;
    }
};
