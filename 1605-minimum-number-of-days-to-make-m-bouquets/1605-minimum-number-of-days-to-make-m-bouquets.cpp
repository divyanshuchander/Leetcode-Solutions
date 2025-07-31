class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int answer = -1;
        long long flowersReq = (long) m *(long) k;
        int n = bloomDay.size();
        if (flowersReq > n)
            return -1; // flowers required is greater than array length
        int low = 1;
        int high = INT_MIN;
        for (auto i : bloomDay)
            high = max(high, i);

        while (low <= high) {
            int totalBouquets = 0;
            int mid = low + ((high - low) / 2);
            int i = 0, j = 0;
            int consecutiveCount = 0;
            for (int day : bloomDay) {      //calculating consecutive days to check possible bouquets
                if (day <= mid) {
                    consecutiveCount++;
                    if (consecutiveCount == k) {
                        totalBouquets++;
                        consecutiveCount = 0;
                    }
                } else {
                    consecutiveCount = 0;
                }
            }

            if (totalBouquets >= m) {
                answer = mid;
                high = mid - 1;

            } else {
                low = mid + 1;
            }
        }
        return answer;
    }
};