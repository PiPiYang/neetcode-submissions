class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        set num_set(nums.begin(), nums.end());
        int count = 1, temp = *num_set.begin(), max_len = 0;
        
        for(int i:num_set){
            if(temp + 1 == i){
                count++;
            }else{
                max_len = max(max_len, count);
                count = 1;
            }
            temp = i;
        }
        max_len = max(max_len, count);

        return max_len;
    }
};
