class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        vector<bool> left(n, false);
        vector<bool> right(n, false);
        int mx = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] > mx) {
                left[i] = true;
            }
            mx = max(mx, nums[i]);
        }
        mx = nums[n - 1];
        for (int j = n - 2; j >= 0; j--) {
            if (nums[j] > mx) {
                right[j] = true;
            }
            mx = max(mx, nums[j]);
        }
        ans.push_back(nums[0]);
        for (int i = 1; i < n - 1; i++) {
            if (left[i] || right[i]) {
                ans.push_back(nums[i]);
            }
        }
        if (n > 1) {
            ans.push_back(nums[n - 1]);
        }
        return ans;
    }
};