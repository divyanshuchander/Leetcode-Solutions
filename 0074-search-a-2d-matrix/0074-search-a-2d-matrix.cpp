class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int low = 0;
        int high = m * n - 1;

        while (low <= high) {
            int mid = low + ((high - low) / 2);
            int row = mid / m;
            int column = mid % m;
            int element = matrix[row][column];
            if (element == target)
                return true;
            else if (element < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};