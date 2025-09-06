class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1) return false;
        stack<char>brac;
        for(auto i : s){
            if(i == '('||i=='['||i=='{'){
                brac.push(i);
            }
            if(brac.empty()) return false;

            if(i == ')'){
                if(brac.top()!= '(') return false;
                else brac.pop();
            }
            else if (i == ']'){
                if(brac.top()!= '[') return false;
                else brac.pop();
            }
            else if (i == '}'){
                if(brac.top()!= '{') return false;
                else brac.pop();
            }
           
        }
        return (brac.empty());
    }
};