class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();

        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + ((high - low) / 2);
            int maxEle = INT_MIN;
            int row, column;
            for (int i = 0; i < m; i++) {
                if (mat[i][mid] > maxEle) {
                    maxEle = mat[i][mid];
                    row = i;
                    column = mid;
                }
            }
            int left = column - 1 >= 0 ? mat[row][column - 1] : -1;
            int right = column + 1 < n ? mat[row][column + 1] : -1;
            if (maxEle > left && maxEle > right) {
                return {row, column};
            } else if (maxEle < left)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return {-1, -1};
    }
};