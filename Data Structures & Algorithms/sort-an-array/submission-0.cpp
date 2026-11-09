class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size() - 1;
        while(n > 0){
            for(int root = n/2; root >= 0; root--){
                int temp;
                while(root < n){
                    if(2*root + 2 <= n){
                    temp = nums[2*root+2] > nums[2*root+1] ? 2*root+2 : 2*root+1;
                    }else if(2*root + 1 <= n){
                        temp = 2*root+1;
                    }else{
                        break;
                    }
                    
                    if(nums[root] < nums[temp]){
                        swap(nums[root] , nums[temp]);
                        
                    }else{
                        break;
                    }
                    root = temp;
                }
            }
            swap(nums[0] , nums[n--]);
        }
        return nums;
    }
};
 // heap sort
 // 從