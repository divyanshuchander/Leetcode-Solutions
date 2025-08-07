class Solution {
public:
    int myAtoi(string s) {
        int answer = 0;
        bool isNegative = false;
        int i = 0;
        int n = s.size();
        while (i < n && s[i] == ' ')
            i++;
        if (i == n)
            return 0;
        if (s[i] == '-') {
            isNegative = true;
            i++;
        } else if (s[i] == '+') {
            i++;
        }
        for (int j = i; j < n; j++) {
            if (s[j] < '0' || s[j] > '9')
                return isNegative?(-1)*answer:answer;
            else {
                int digit = (int)(s[j]) - (int)('0');
                if (answer > (INT_MAX - digit) / 10) {
                    return isNegative ? INT_MIN : INT_MAX;
                } else {
                    answer = answer * 10 + digit;
                }
            }
        }
        return isNegative ? answer * (-1) : answer;
    }
};