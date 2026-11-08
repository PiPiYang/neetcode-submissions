class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> ump;
        for(int i: nums){
            ump[i]++;
        }
        int limit = nums.size() / 2;
        for(auto i:ump){
            if(i.second > limit) return i.first;
        }
    }
};
