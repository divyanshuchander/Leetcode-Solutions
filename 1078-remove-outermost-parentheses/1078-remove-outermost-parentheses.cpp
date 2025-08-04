class Solution {
public:
    string removeOuterParentheses(string s) {
        string answer = "";
        int balance = 0;
        for (auto i : s) {
            if (i == '(' && balance == 0){
                balance++;
                continue;
            }
            else if (i == ')' && balance == 1){
                balance--;
                continue;
            }
            else if(i=='('){
                answer+=i;
                balance++;
            }
            else if(i==')'){
                answer += i;
                balance--;
            }
        }
        return answer;
    }
};