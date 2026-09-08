class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int maxr = matrix.size()-1 ;
        int minr = 0;


        int maxc =matrix[0].size()-1;
        int minc = 0;
        
        while(minr<=maxr && minc<=maxc){
        //right 
       for(int c=minc ; c<=maxc ; c++ ){
        v.push_back(matrix[minr][c]);
       }
       minr++;
      if(minr>maxr || minc>maxc) break;
       
       //down
       for(int  r=minr ; r<=maxr ; r++){
        v.push_back(matrix[r][maxc]);
       }
       maxc--;
        if(minr>maxr || minc>maxc) break;
       
       //left
       for( int c= maxc ; c>= minc ; c--){
        v.push_back(matrix[maxr][c]);
       }
       maxr--;
      if(minr>maxr || minc>maxc) break;
      
      //top
       for( int r = maxr ; r>=minr ; r--){
        v.push_back(matrix[r][minc]);
       }
       minc++;
        if(minr>maxr || minc>maxc) break;
    }
        

      return v;

   }
};