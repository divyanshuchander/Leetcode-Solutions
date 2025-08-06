class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> charCnt;
        for(auto ltr : s) charCnt[ltr]++;
        string answer = "";
        multimap<int , char> cntChar;

        for(auto it : charCnt)cntChar.insert({it.second ,it.first});

        for(auto it = cntChar.rbegin(); it!=cntChar.rend();it++){
            for(int i  = 0; i<(*it).first; i++){
                answer+=(*it).second;
            }
        }
        return answer;
    }
};