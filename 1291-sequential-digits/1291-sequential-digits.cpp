class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string digits = "123456789";
        int lowlength = (to_string(low)).size();
        int highlength = (to_string(high)).size();

        for (int len = lowlength; len <= highlength; len++) {
            for (int start = 0; start + len <= 9; start++) {
                int num = stoi(digits.substr(start, len));
                if (num >= low && num <= high) {
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};