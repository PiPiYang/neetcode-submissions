class Solution {
public:

    string encode(vector<string>& strs) {
        string temp;
        for(string i:strs){
            int n = i.length();
            temp += format("{}#{}", n, i);
        }
        return temp;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i < s.length()){
            int j=i;
            while(s[j] != '#'){
                j++;
            }
            int n = stoi(s.substr(i, j-i));
   
            ans.push_back(s.substr(j+1, n));
            i = j + 1 + n;
        }
        return ans;
    } 
};
