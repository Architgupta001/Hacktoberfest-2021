class Solution {
    public int minPathSum(int[][] grid) {
        
        int m = grid.length;
        int n = grid[0].length;
        
        int res[][] = new int[m + 1][n + 1];
        
        for(int i = 0; i < m; i++){
            res[i][n] = Integer.MAX_VALUE;
        }
        for(int i = n; i >= 0; i--){
            res[m][i] = Integer.MAX_VALUE;
        }
        
        res[m - 1][n] = 0;
        
        for(int i = m - 1; i >= 0; i--){
            for(int j = n - 1; j >= 0; j--){
                
                res[i][j] = grid[i][j] + Math.min(res[i + 1][j], res[i][j + 1]);
                
            }
        }
        
        return res[0][0];
        
    }
}
