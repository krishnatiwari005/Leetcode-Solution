class Solution {
public:
    int countAsterisks(string s) {
        int cnt = 0;
        bool flag = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '|') {
                flag = !flag;
            }
            if (s[i] == '*' && !flag) {
                cnt++;
            }
        }
        return cnt;
    }
};