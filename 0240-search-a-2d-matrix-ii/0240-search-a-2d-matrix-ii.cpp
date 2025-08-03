class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0, column = n - 1;
        while (row < m && column >= 0) {
            int ele = matrix[row][column];
            if (ele == target)
                return true;
            else if (ele < target)
                row++;
            else
                column--;
        }

        return false;
    }
};