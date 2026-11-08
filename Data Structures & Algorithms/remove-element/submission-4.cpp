class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size()-1;
        int i = 0;
        while(i <= length){
            if(nums[i] == val){
                nums[i] = nums[length--];
            }else{
                i++;
            }
        }
        return i;
    }
};
// 確認 vector大小
// 對 vector 裡面每個數字都檢查是否等於 val
// 等於 val 就跟後面的位置交換?!
// 最後就能確認有多少個不是val的元素
// 回傳 大小