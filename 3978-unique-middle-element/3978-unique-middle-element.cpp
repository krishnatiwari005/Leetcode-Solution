class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int middle = nums.size() / 2;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[middle] == nums[i]) {
                cnt++;
            }
            if (cnt == 2) {
                return false;
            }
        }
        return true;
    }
};