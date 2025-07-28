class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for (int row = 1; row <= numRows; row++) {
            vector<int> oneRow;
            for (int i = 0; i < row; i++) {
                if (i == 0 || i==row-1) {
                    oneRow.push_back(1);
                } else {
                    oneRow.push_back(answer[row - 2][i - 1] +
                                     answer[row - 2][i]);
                }
            }
            answer.push_back(oneRow);
        }
        return answer;
    }
};