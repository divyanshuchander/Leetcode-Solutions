class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> letterCnt;
        for (auto i : s) {
            letterCnt[i]++;
        }

        for (auto lettr : t) {
            if (letterCnt[lettr] > 0) {
                letterCnt[lettr]--;
                if (letterCnt[lettr] == 0)
                    letterCnt.erase(lettr);
            } else
                return false;
        }
        if(!letterCnt.empty()) return false;
        return true;
    }
};