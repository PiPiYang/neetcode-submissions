class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i:nums){
            map[i]++;
        }
        vector<pair<int, int>> sort_ump;
        for(auto& i: map){
            sort_ump.push_back({i.second, i.first});
        } 

        // sort(sort_ump.begin(), sort_ump.end(), [](auto& a, auto& b){return a.first > b.first;});
        sort(sort_ump.begin(), sort_ump.end(),greater<pair<int, int>>());

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(sort_ump[i].second);
        }
        return ans;
    }
};
