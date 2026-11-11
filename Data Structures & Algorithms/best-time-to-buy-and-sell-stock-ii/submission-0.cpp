class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 簡單說就上升那一段
        //開頭購買 結尾賣出
        int last_p = prices[0];
        int ans = 0;
        for(int i: prices){
            int temp = i - last_p;
            last_p = i;
            if(temp > 0){
                ans += temp;
            }
        }
        return ans;
    }
};