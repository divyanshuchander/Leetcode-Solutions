class Solution {
public:
    void findCombination(int i ,int sum, int k , int n , vector<int>& combination, vector<vector<int>>& combinations){
        if(sum>n) return;
        if(combination.size()>k) return;
        if(sum == n && combination.size() == k){
            combinations.push_back(combination);
            return;
        }
        if(i>9)return;

        combination.push_back(i);
        findCombination(i+1 , sum+i , k , n , combination, combinations);
        combination.pop_back();
        findCombination(i+1 , sum , k , n , combination, combinations);
        


    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> combinations;
        vector<int> combination;
        findCombination(1,0,k,n,combination,combinations);
        return combinations;
    }
};