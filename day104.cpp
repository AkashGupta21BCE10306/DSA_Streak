class Solution {
  public:
  
    bool isPalindrome(vector<int>& subArr){
        if(subArr.size()==0){
            return true;
        }
        int left = 0;
        int right = subArr.size()-1;
        while(left<right){
            if(subArr[left]!=subArr[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
  

    string pattern(vector<vector<int>> &arr) {
        int n  = arr.size();
        int m = arr[0].size();
        for(int i=0;i<n;i++){
            vector<int> subArr;
            for(int j=0;j<m;j++){
                subArr.push_back(arr[i][j]);
            }
            if(isPalindrome(subArr)){
                return to_string(i) +" "+"R";
            }
        }
        
        for(int j=0;j<m;j++){
            vector<int> subArr;
            for(int i=0;i<n;i++){
                subArr.push_back(arr[i][j]);
            }
            if(isPalindrome(subArr)){
                return to_string(j) +" "+"C";
            }
        }
        return "-1";
    }
};