class Solution {
public:
    int trap(vector<int>& height) {     //O(N) space
        vector<int> minLR(height.size());
        int totalWater = 0;
        int maxL = -1;
        int maxR = -1;
        for(int i = 0; i<height.size();i++){
            minLR[i] = maxL;
            maxL = max(maxL , height[i]);
        }
        for(int i = height.size()-1; i>=0;i--){
            minLR[i] = min(minLR[i] , maxR);
            maxR = max(maxR,height[i]);
            int currWater = minLR[i] - height[i];
            if(currWater>0){
                totalWater+=currWater;
            }
        }

        return totalWater;
    }
};