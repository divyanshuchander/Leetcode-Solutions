class Solution {
public:
    string reverseWords(string s) { // using stacks
        stack<string> word;
        string answer = "";
        int n = s.size();
        string singleWord = "";

        for (int i = 0; i < n; i++) {

            if (s[i] != ' ') {
                if (i == n - 1) {
                    singleWord += s[i];
                    word.push(singleWord);
                } else {
                    singleWord += s[i];
                }

            } else {
                if (!singleWord.empty()) {
                    word.push(singleWord);
                    singleWord = "";
                } else
                    continue;
            }
        }
        while (!word.empty()) {
            if (word.size() == 1) {
                answer += word.top();
                word.pop();
                continue;
            }
            answer += word.top();
            word.pop();
            answer += " ";
        }

        return answer;
    }
};