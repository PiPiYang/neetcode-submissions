class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for(auto i = 1 ; i < strs.size(); i++){
            int j = 0;
            while(ans[j] == strs[i][j] && ans[j] != 0 ){
                j++;
            }
            ans.resize(j);
        }
        return ans;
    }
};