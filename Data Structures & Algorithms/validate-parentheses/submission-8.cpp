class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;

        for(char c: s){
            if(c =='(') s1.push(')');
            else if(c =='{') s1.push('}');
            else if(c =='[') s1.push(']');
            else {
                if(s1.empty() || s1.top() != c) return false;
                s1.pop();
            }
        }
        return s1.empty();

    }
};
