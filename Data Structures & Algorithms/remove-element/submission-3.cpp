class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // 慢指標：指向下一個要放置合法元素的位置
        
        for (int i = 0; i < nums.size(); i++) { // 快指標：掃描整個陣列
            if (nums[i] != val) {
                nums[k] = nums[i]; // 把合法元素往前搬
                k++;
            }
        }
        return k; // k 剛好就是新陣列的有效長度
    }
};
// 確認 vector大小
// 對 vector 裡面每個數字都檢查是否等於 val
// 等於 val 就跟後面的位置交換?!
// 最後就能確認有多少個不是val的元素
// 回傳 大小