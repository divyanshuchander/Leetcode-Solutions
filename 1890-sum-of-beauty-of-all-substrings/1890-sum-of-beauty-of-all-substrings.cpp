class Solution {
public:
    int beautySum(string s) {
        int len = s.size();
        int answer = 0;
        for (int i = 0; i < len; i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < len; j++) {
                freq[s[j] - 'a']++;
                int highest = 0;
                int lowest = INT_MAX;
                for (auto i : freq) {
                    if (i > 0) {
                        highest = max(highest, i);
                        lowest = min(lowest, i);
                    }
                }
                answer += highest - lowest;
            }
        }
        return answer;
    }
};