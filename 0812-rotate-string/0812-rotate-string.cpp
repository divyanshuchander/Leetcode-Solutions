class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        s = s+s;
        int i = 0;
        while(i<=s.size()-goal.size()){
            if(s.substr(i , goal.size()) == goal) return true;
            else i++;
        }

        return false;
    }

};