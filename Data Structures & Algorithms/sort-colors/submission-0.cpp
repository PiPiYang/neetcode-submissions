class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int cur = 0, temp;
        while(cur <= r){
            if(nums[cur] == 0){
                nums[cur] = nums[l];
                nums[l] = 0;
                l++;
                cur++;
            }else if(nums[cur] == 2){
                nums[cur] = nums[r];
                nums[r] = 2;
                r--;
            }else{
                cur++;
            }
        }

    }
};