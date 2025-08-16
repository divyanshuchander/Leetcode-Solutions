class Solution {
public:
    int maximum69Number(int num) {
        stack<int> digits;
        while (num) {
            digits.push(num % 10);
            num = num / 10;
        }
        int answer = 0;

        while (digits.size()) {
            if (digits.top() == 6) {
                answer = answer * 10 + 9;
                digits.pop();
                break;
            }
            if (digits.top() == 9) {
                answer = answer * 10 + 9;
                digits.pop();
            }
        }
        while (digits.size()) {
            answer = answer * 10 + digits.top();
            digits.pop();
        }
        return answer;
    }
};