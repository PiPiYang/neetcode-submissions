class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> ump;
        for(string i: strs){
            string words(26, 0);
            for(char j: i){
                words[ j - 'a']++;
            }
            ump[words].push_back(i);
        }
        
        for(auto pair: ump){
            ans.push_back(pair.second);
        }
        return ans;
        
    }
};

// key : string
// valye : vector<string>