class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int max_val = 0, max_count = 0;
        unordered_map<char, int> ump; // 也可以直接用 int ump[26] = {0}; 速度更快

        int i = 0;
        for (int j = 0; j < n; j++) {
            // 1. 右指標 j 進場，並用 s[j] 更新歷史最大頻率
            ump[s[j]]++;
            max_count = max(ump[s[j]], max_count);

            // 2. 檢查「需要替換的字元數量」是否超過 k
            while ((j - i + 1) - max_count > k) {
                ump[s[i]]--;
                i++;
            }

            // 3. 此時視窗保證合法，更新最大長度
            max_val = max(max_val, j - i + 1);
        }
        return max_val;
    }
};