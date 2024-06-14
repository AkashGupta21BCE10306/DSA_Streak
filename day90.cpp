class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
         int a=n/100,
        b=n%10,
        c=(n%100)/10;
        if(a*a*a+b*b*b+c*c*c ==n)return "true";
        return "false";
    }
};