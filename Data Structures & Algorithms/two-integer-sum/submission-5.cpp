class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> ans; // val -> index

        for(int i = 0; i < nums.size(); i++){
            int val = target - nums[i];
            if(ans.find(val) != ans.end()){ 

                return {ans[val],i};
            }
            if(ans.find(nums[i])== ans.end()){
                ans.insert({nums[i], i});
            }
        }
        return {};
    }
};
 