class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;
        int val;

        for(int i = 0; i < nums.size(); i++){
            val = target - nums[i];
            auto it = ans.find(val);
            if(it != ans.end()){ //找到
                return {it->second,i};
            }
            if(ans.find(nums[i])== ans.end()){
                ans.insert({nums[i], i});
            }
        }
        return {};
    }
};
 