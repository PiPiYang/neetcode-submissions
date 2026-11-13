class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int i = 0, j = n-1, mid = (j + i)/2;
        while(i < j){
            if(nums[mid] > nums[j]){
                i = mid + 1;
            }else{
                j = mid;
            }
            mid = (j + i) / 2;
        }
        return nums[i];
    }
};
