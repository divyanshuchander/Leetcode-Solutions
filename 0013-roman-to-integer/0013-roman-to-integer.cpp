class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanToInt = {
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}};
        int answer = 0;
        int currNo = 0;
        char prev = s[0];
        for (auto r : s) {
            int currVal = romanToInt[r];
            int prevVal = romanToInt[prev];

            if (r == prev) {
                currNo += currVal;
            } else if (currVal > prevVal) {
                currNo = currVal - currNo;
            } else if (currVal < prevVal) {
                answer += currNo;
                currNo = currVal;
            }
            prev = r;
        }
        answer += currNo;

        return answer;
    }
};