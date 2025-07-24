class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minimal = prices[0];
        for(auto i : prices){
            minimal = min(minimal ,i);
            maxProfit = max(maxProfit , i - minimal);
        }
        return maxProfit;
    }
};