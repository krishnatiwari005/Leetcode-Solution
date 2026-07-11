class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int s = strs.size();
        int l = 200, x = 0;
        for (int i = 0; i < s; i++) {
            x = strs[i].length();
            if (x < l) {
                l = x;
            }
        }
        string res = "";
         for(int i = 0; i < l; i++) {
            char ch = strs[0][i];
            for (int j = 1; j < s; j++) {
                if (strs[j][i] != ch) {
                    return res;
                }      
            }          
            res += ch; 
        }
        return res;
    }
};