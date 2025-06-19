class Solution {
public:
    bool isPalindrome(string s) {
        string normalised;
        for(auto i : s){
            if(isalnum(i)){
                normalised+=tolower(i);
            }
        }
        int l = 0 , r = normalised.size() - 1;
        while(l<r){
            if(normalised[l] != normalised[r]) return false;
            l++;
            r--;
        }
        return true;

    }
};