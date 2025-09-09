class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        unordered_map<int, int> nextGreater;
        for (int i = nums2.size() - 1; i >= 0;i--) { // loop on nums2 which i currently did in O(len^2)
            int nGN = -1;
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[i] < nums2[j]) {
                    nGN = nums2[j];
                    break;
                }
            }
            nextGreater[nums2[i]] = nGN; // initialised the next greater index(NGI) of any no
        }

        for(auto i : nums1){
            answer.push_back(nextGreater[i]);
        }
        return answer;
    }
};