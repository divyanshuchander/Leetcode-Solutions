class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int depthCnt = 0;

        for(auto i : s){
            if(i == '('){
                depthCnt++;
                maxDepth = max(maxDepth , depthCnt);
            }
            if(i == ')'){
                depthCnt--;
            }
        }
        return maxDepth;
    }
};