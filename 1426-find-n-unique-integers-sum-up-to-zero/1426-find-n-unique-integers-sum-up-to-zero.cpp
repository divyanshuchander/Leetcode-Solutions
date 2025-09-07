class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> answer(n);

        answer[0] = -1 * ((n * (n - 1)) / 2);
        for (int i = 1; i < n; i++) {
            answer[i] = i;
        }
        return answer;
    }
};