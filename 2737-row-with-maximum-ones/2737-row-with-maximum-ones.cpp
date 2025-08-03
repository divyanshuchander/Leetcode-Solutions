class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxCount = 0;
        int rowIndex = 0;
        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i<n; i++){
            int cntOne = 0;
            for(int j = 0; j<m;j++){
                if (mat[i][j] == 1){
                    cntOne++;
                }
            }
            if (cntOne > maxCount){
                maxCount = cntOne;
                rowIndex = i;
            }
        }
        return {rowIndex , maxCount};
    }
};