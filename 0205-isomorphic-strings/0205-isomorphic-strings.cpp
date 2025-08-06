class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char , char> mapping , revMap;
        //since both strings are equal in length

        for(int i =0; i< s.size();i++){

             if(mapping.find(s[i]) == mapping.end() && revMap.find(t[i])==revMap.end()){
                mapping[s[i]] = t[i];
                revMap[t[i]] = s[i];
                continue;
            }
            else if(mapping[s[i]]==t[i] && revMap[t[i]] == s[i] ) continue;
            else return false;
            
            
        }
        return true;
    }
};