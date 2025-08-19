class Solution {
public:
    //pretty counter-Intuitive
    void generate(int open, int close,int n , string s , vector<string>& ans){
        if(open==n && close == n){
            ans.push_back(s);
            return;
        }

        if(open < n){
            generate(open+1 , close, n,s+'(',ans);
        }
        if(close<open){
            generate(open, close+1 , n , s+')' , ans);
        }
    }


    vector<string> generateParenthesis(int n) {
        if(n == 0) return {};
        vector<string> answer;
        generate(0 , 0, n , "" , answer);
        return answer;
    }
};