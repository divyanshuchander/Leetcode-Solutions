class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int answer = -1;
        int maxElement = INT_MIN;
        for (auto i : weights)
            maxElement = max(maxElement, i);
        long low = maxElement; // the max should always be put in otherwise we
                               // cant put in the next;
        long high = 0;
        for (auto i : weights)
            high += i;

        while (low <= high) {
            long capacity = low + ((high - low) / 2);
            int daysTaken = 1;
            long currWeight = 0;

            for (auto package : weights) {
                if (currWeight+package <= capacity) {
                    currWeight += package;
                } else {
                    daysTaken++;
                    currWeight = package;
                }
            }


            if (daysTaken > days) {
                low = capacity + 1;
            } else {
                answer = capacity;
                high = capacity - 1;
            }
        }
        return answer;
    }
};