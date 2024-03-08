//Check if frequencies can be equal
#include<iostream>
using namespace std;
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	     vector<int>hash(26,0);
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }
        int cnt=0;
        int dist=0;
        
        for(int i=0;i<26;i++){
            if(hash[i]>0){
                if(dist==0){
                    
                    dist=hash[i];
                }
                else {
                    if(hash[i]!=dist){
                           cnt++;
                        if(abs(hash[i]-dist)>1 || cnt>1)return false;
                     
                    }
                    else {
                        continue;
                    }
                }
                
                
            }
        }
        return true;
    
	}
};