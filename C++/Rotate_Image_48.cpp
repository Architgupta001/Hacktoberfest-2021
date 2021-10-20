// AUTHOR: Vishal Patil

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Taking transpose of the matrix
        for(int i=0; i<matrix.size(); ++i)
            for(int j=i+1; j<matrix[i].size(); ++j) 
                swap(matrix[i][j], matrix[j][i]);
        
        // reversing all the columns
        int n = matrix[0].size();
        for(int j=0; j<matrix[0].size()/2; ++j)
            for(int i=0; i<matrix.size(); ++i)
                swap(matrix[i][j], matrix[i][n-1-j]);
    }
};