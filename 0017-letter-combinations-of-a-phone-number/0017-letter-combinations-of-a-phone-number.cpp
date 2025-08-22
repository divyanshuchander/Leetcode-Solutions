class Solution {
public:

    void solve(int i ,string& digits ,string combination,unordered_map<char,string>& keyMap, vector<string>& answers){
        if(i==digits.size()){
            if(combination == "") return;
            answers.push_back(combination);
            return;
        }

        string s = keyMap[digits[i]];
        for(auto alpha : s){
            solve(i+1 ,digits, combination+alpha , keyMap , answers);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> answers;
        unordered_map<char , string> keyMap = {
            {'2' , "abc"},
            {'3' , "def"},
            {'4' , "ghi"},
            {'5' , "jkl"},
            {'6' , "mno"},
            {'7' , "pqrs"},
            {'8' , "tuv"},
            {'9' , "wxyz"}

        };
        string combination;
        solve(0 , digits,"" ,keyMap , answers);


        return answers;
    }
};