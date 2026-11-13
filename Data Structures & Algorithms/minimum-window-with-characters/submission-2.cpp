class Solution {
public:
    string minWindow(string s, string t) {
        int len_s = s.length();
        int len_t = t.length();
        if (len_s < len_t) return "";

        int need[128] = {0};
        int have[128] = {0};
        for (char c : t) {
            need[c]++;
        }

        int i = 0, count = 0;
        int min_len = len_s + 1, start_idx = 0;

        for (int j = 0; j < len_s; j++) {
            char c = s[j];
            if (need[c] > 0) {
                have[c]++;
                if (need[c] >= have[c]) {
                    count++;
                }
            }

            while (count == len_t) {
                char c2 = s[i];
                if (need[c2] > 0) {
                    if (j - i + 1 < min_len) {
                        min_len = j - i + 1;
                        start_idx = i;
                    }
                    have[c2]--;
                    if (need[c2] > have[c2]) {
                        count--;
                    }
                }
                i++;
            }
        }

        return min_len == len_s + 1 ? "" : s.substr(start_idx, min_len);
    }
};