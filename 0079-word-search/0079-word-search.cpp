class Solution {
public:
    bool isWord(int cnt, int i, int j, string& word,
                vector<vector<char>>& board) {
        if(cnt == word.size()) return true;
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() ||
            board[i][j] == '$')
            return false;
        if(board[i][j] != word[cnt]) return false;

        if (board[i][j] == word[cnt]) {
            vector<vector<int>> traversal = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

            for (auto cdn : traversal) {
                char temp = board[i][j];
                board[i][j] = '$';
                if (isWord(cnt + 1, i + cdn[0], j + cdn[1], word, board))
                    return true;
                board[i][j] = temp;
            }
        }
        return false; 
    }

    bool exist(vector<vector<char>>& board, string word) {
        unordered_map<char, int> count;     //in order to prevent the time complexity to take a large time, we reverse if 
        for(char c : word) {                //end word has lesser frequency thereby decreasing search space
        count[c]++;
        }

        if(count[word[0]] > count[word.back()]) {
        reverse(word.begin(), word.end());
        }

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0] &&
                        isWord(0, i, j, word ,board)) return true;
            }
        }
        return false;
    }
};