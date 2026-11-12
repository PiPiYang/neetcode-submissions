class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0;
        int max_val = 0, temp = 0;
        unordered_set<char> str_set;

        for(int j = 0; j < n; j++){
            while(str_set.find(s[j]) != str_set.end()){
                str_set.erase(s[i]);
                 i++;
            }  
            str_set.insert(s[j]);
            max_val = max(j-i+1, max_val);
        }
        return max_val;
    }
};
