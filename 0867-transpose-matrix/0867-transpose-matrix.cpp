class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    
    int m = matrix.size(); //Rows
    int n = matrix[0].size(); //Columns
    // int t[n][m]
    vector<vector<int>>t(n,vector<int>(m));
    for(int i = 0 ; i<n ; i++){
        for(int j= 0 ; j<m ; j++){
           t[i][j] = matrix[j][i];
        }
        cout<<endl;
    }

return t;
    }
};