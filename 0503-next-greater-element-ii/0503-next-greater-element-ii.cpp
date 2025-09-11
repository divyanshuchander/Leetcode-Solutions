class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> answer(nums.size(), -1);
        stack<int> st;
        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            while(!st.empty() && st.top()<= nums[i%nums.size()]) st.pop();

            if(st.empty()) answer[i% nums.size()] = -1;
            else{
                answer[i%nums.size()] = st.top();
            }
            st.push(nums[i%nums.size()]);
        }
        return answer;
    }
};