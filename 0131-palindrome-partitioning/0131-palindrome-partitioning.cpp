class Solution {
public:

    bool isPalindrome(string s){
        int l = 0 , r = s.size()-1;
        while(l<=r){
            if(s[l]!= s[r]) return false;
            l++;r--;
        }
        return true;
    }
    void findPalPart(string s , vector<string>& parts , vector<vector<string>>& answers){
        if(s.size() == 0){
            answers.push_back(parts);
            return;
        }

        for(int i = 0; i<s.size();i++){
            if(isPalindrome(s.substr(0, i+1))){
                parts.push_back(s.substr(0,i+1));
                findPalPart(s.substr(i+1) , parts , answers);
                parts.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> answers;
        vector<string> parts;
        findPalPart(s , parts ,answers);
        return answers;
        
    }
};