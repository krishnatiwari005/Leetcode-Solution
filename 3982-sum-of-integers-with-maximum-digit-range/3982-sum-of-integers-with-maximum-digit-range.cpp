class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int t = 0;
        int mx = -1;
        int sum = 0;
        for (int num : nums) {
            t = digitrange(num);
            mx = max(mx, t);
        }
        for (int num : nums) {
            if (digitrange(num) == mx) {
                sum += num;
            }
        }
        return sum;
    }
    int digitrange(int num) {
        int mx = -1, mn = 10;
        while (num > 0) {
            int r = num % 10;
            mx = max(mx, r);
            mn = min(mn, r);
            num /= 10;
        }
        return mx - mn;
    }
};