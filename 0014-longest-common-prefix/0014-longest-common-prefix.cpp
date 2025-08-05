class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end());
        int firstSize = strs[0].size();
        string answer = "";
        for (int i = 0; i < firstSize; i++) {
            if (strs[0][i] == strs[strs.size()-1][i]) {
                answer += strs[0][i];
            } else
                break;
        }
        if (answer.empty())
            return "";
        return answer;
    }
};