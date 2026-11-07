class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
    
        string ans = strs[0];
        int mini = min(strs[0].length(), strs.back().length()); 
        int i = 0;
        while(strs[0][i] == strs.back()[i] && strs[0][i] != 0){
            i++;

        }
        return strs[0].substr(0, i);
        // string ans = strs[0];

        // for(auto i = 1 ; i < strs.size(); i++){
        //     int j = 0;
        //     while(ans[j] == strs[i][j] && ans[j] != 0 ){
        //         j++;
        //     }
        //     ans.resize(j);
        // }
        // return ans;
    }
};