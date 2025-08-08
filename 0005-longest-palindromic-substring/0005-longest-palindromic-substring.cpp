class Solution {
public:
    void checkEven(string s, int i, int& index, int& cnt) {
        int len = s.size();
        // has 2 centers
        int left = i;
        int right = i + 1;
        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > cnt) {
                index = left;
                cnt = right - left + 1;
            }
            left--;
            right++;
        }
    }

    void checkOdd(string s, int i, int& index, int& cnt) {
        int len = s.size();
        // has 1 center
        int left = i;
        int right = i;
        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > cnt) {
                index = left;
                cnt = right - left + 1;
            }
            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {
        int len = s.size();
        if (len == 1)
            return s;
        int index = 0;
        int cnt = 1;

        for (int i = 0; i < len; i++) {
            checkEven(s, i, index, cnt);
            checkOdd(s, i, index, cnt);
        }

        return s.substr(index, cnt);
    }
};