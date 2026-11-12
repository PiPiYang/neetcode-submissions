class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0, j = 0;
        int val = 0, max_val = 0;
        while(j < n){
            val = prices[j] - prices[i];
            if(max_val < val){
                max_val = val;
            }
            if(prices[j] < prices[i]){
                i = j;
            }
            j++;
            

        }
        return max_val;
    }
};
