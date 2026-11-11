class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0) return true;
        int n = s.length();
        int i = 0, j = n-1;

        while(i <= j){
            while(i < j && !isalnum(s[i])){
                i++;
            }
            while(i < j && !isalnum(s[j])){
                j--;
            }
            if(isupper(s[j])){
                s[j] = tolower(s[j]);
            }
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }

            if(s[i] != s[j] || i > n || j < 0){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
