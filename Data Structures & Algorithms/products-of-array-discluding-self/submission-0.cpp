class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> sum(n, 1);

        // 從左到右
        sum[0] = 1;
        for(int i = 1; i < n; i++){
            sum[i] = nums[i-1] * sum[i-1];
        }

        // 從右到左
        int temp = 1;
        for(int j = n-1; 0 <= j; j--){
            sum[j] = temp * sum[j];
             temp *= nums[j];
        }

        return sum;

    }
};
