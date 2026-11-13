class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int max_val = 0, max_count = 0;
        int count[26] = {0}; // 用長度 26 的靜態陣列取代 unordered_map，零動態配置開銷

        int i = 0;
        for (int j = 0; j < n; j++) {
            // 1. 右指標 j 進場：透過 s[j] - 'A' 將 'A'~'Z' 映射到索引 0~25
            count[s[j] - 'A']++;
            max_count = max(count[s[j] - 'A'], max_count);

            // 2. 若需要替換的字元數量超過 k，左指標 i 右移收縮視窗
            while ((j - i + 1) - max_count > k) {
                count[s[i] - 'A']--;
                i++;
            }

            // 3. 更新最大合法視窗長度
            max_val = max(max_val, j - i + 1);
        }
        return max_val;
    }
};