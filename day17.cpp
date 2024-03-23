//Fibonacci series up to Nth term
#include<iostream>
using namespace std;
class Solution{
 vector<int>v;
        int N=1000000007;
       if(n==1)
       return {0,1};
       n=n-1;
       int a=0;
       int b=1;
       int i=0;
       v.push_back(0);
       v.push_back(1);
       while(n--)
       {
           int c=a+b;
           c=c%N;
           v.push_back(c);
           a=b;
           b=c;
           
       }
       return v;
       }
