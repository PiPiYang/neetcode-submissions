class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> ump;

        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            ump[temp].push_back(strs[i]);
        }

        for(auto& pair: ump){
            ans.push_back(pair.second);
        }

        return ans;

    }
};

// 把每一個str 先sort 
// 再根據sort後的字串看是否有相同
// 相同就是同一個set的str

// for 判斷每一個str 是否已經在vector裡面?
