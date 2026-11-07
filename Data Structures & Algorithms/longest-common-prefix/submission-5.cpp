class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int mini = min(strs[0].length(), strs.back().length()); 
        int i = 0;
        while(strs[0][i] == strs.back()[i] && strs[0][i] != 0){
            i++;
        }
        return strs[0].substr(0, i);
    }
};