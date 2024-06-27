bool isToepliz(vector<vector<int>>& mat) {
    // code here
   for(int i=0;i<mat.size()-1;i++){
       for(int j=0;j<mat[0].size()-1;j++){
           if(mat[i][j]!=mat[i+1][j+1]){
               return false;
           }
       }
   }
    return true;
}

