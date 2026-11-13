class Solution {
public:
    bool isValid(string s) {
        stack<int> s1;

        for(char c: s){
            if(c =='('){
               s1.push(1);
            }else if(c =='{'){
                s1.push(2);
            }else if(c =='['){
                s1.push(3);
            }else if(c ==')'){
                if(s1.empty() || s1.top() != 1) return false;
                s1.pop();
            }else if(c =='}'){
                if(s1.empty() || s1.top() != 2) return false;
                s1.pop();
            }else if(c ==']'){
                if(s1.empty() || s1.top() != 3) return false;
                s1.pop();
            }
        }
        if(s1.empty() == true){
            return true;
        }else{
            return false;
        }
    }
};
