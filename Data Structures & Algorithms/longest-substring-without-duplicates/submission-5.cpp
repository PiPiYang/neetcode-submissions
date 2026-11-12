class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0;
        int max_val = 0, temp = 0;
        unordered_set<char> str_set;

        for(int j = 0; j < n; j++){ 
            if(str_set.count(s[j])){
                int pos = s.find(s[j], i);
                while(i < pos){
                    str_set.erase(s[i]);
                    i++;
                }
                i++;
            }else{
                str_set.insert(s[j]);
                temp = j-i+1;
                max_val = max(temp, max_val);
            }
        }
        return max_val;
    }
};
