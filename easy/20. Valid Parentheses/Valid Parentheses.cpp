class Solution {
public:
    bool isValid(string s) {
        stack<char> cs;
        
        for(auto x : s){
            if(x == '(' || x == '{' || x == '[') cs.push(x);
            if(x == ')'){
                if(cs.empty()) return false;
                if(cs.top() != '(') return false;
                else cs.pop();
            }
            if(x == '}'){
                if(cs.empty()) return false;
                if(cs.top() != '{') return false;
                else cs.pop();
            }
            if(x == ']'){
                if(cs.empty()) return false;
                if(cs.top() != '[') return false;
                else cs.pop();
            }
        }
        return cs.empty();
    }
};
