//73. Set Matrix Zeroes
//https://leetcode.com/problems/set-matrix-zeroes/
//time complexity: O(m*n)
//space complexity: O(1)


// 1) Check if first row has any zero
// 2) Check if first column has any zero
// 3) Use first row & first col as markers
// 4) Set inner cells to zero based on markers
// 5) If first row should be zero
// 6) If first column should be zero

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        bool firstRowZero = false;
        bool firstColZero = false;

    
        for (int j = 0; j < m; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; 
                    matrix[0][j] = 0; 
                }
            }
        }

       
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

       
        if (firstRowZero) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

       
        if (firstColZero) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
