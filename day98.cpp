class Solution {
  public:
     long long ExtractNumber(string s){
        vector<string>handler;
        int flag=0;
        string filler="";
        for(auto c:s){
            if(c>='0' && c<='9'){
                if(c=='9'){
                    flag=1;
                }
                
                if(flag==0)
                    {
                        filler+=c;
                    }
            }
            if((flag==0)&& (!(c>='0' && c<='9')) && filler.size()>0){
                handler.push_back(filler);
                filler.clear();
            }
            if(flag==1 && (!(c>='0' && c<='9'))){
                flag=0;//reset for other not 9 strings insertion//
                filler.clear();
            }
        
            
        }
        if(handler.size()==0){
            return -1;
        }
        long long int maxi=0;
        for(auto str:handler){
            long long int number=stol(str);
            maxi=max(maxi,number);
        }
        return maxi;
        
    }
};