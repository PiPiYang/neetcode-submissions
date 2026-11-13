class Solution {
public:
    string minWindow(string s, string t) {
        int len_s = s.length();
        int len_t = t.length();
        if (len_s < len_t) return "";
        
        unordered_map<char, int> need; 
        unordered_map<char, int> have;
        for(int c: t){
            need[c]++;
        }

        int i = 0, j = 0, count = 0;
        int min_len = len_s + 1, start_len = 0;
        string ans;
        // 2.尋找包含need完整所需要的元素

        // 尋找 j 位置滿足need所需要的元素
        for(int j = 0; j < len_s; j++){
            int c = s[j];
            if(need.find(c) != need.end()){
                have[c]++;
                if(need[c] >= have[c]){
                    count++;
                }
            }
            // 尋找 i 位置
            while(count == len_t){
                int c2 = s[i];
                if(need.find(c2) != need.end()){ // 找到
                    if(j - i + 1 < min_len){
                        min_len = j - i + 1;
                        start_len = i;
                    }
                    have[c2]--;
                    if(need[c2] > have[c2]){
                        count--;
                    }
                }
                i++;
            }
        }
        
        return min_len == len_s + 1 ? "" : s.substr(start_len, min_len);
    }
};
