class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         if (matrix.empty()) return {}; // Handle empty matrix case
        
        vector<int> ans;
        int m = matrix.size();    // Number of rows
        int n = matrix[0].size(); // Number of columns
        
        int left = 0, right = n - 1, top = 0, bottom = m - 1;
        
        while (left <= right && top <= bottom) {
            // Move right
            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;

            // Move down
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            // Move left (check if row remains)
            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    ans.push_back(matrix[bottom][j]);
                bottom--;
            }

            // Move up (check if column remains)
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        
        return ans;
    }
};