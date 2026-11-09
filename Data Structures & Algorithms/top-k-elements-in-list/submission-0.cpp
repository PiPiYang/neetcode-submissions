class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i:nums){
            map[i]++;
        }
        vector<pair<int, int>> sort_ump (map.begin(), map.end());

        sort(sort_ump.begin(), sort_ump.end(), [](auto& a, auto& b){return a.second > b.second;});

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(sort_ump[i].first);
        }
        return ans;
    }
};
