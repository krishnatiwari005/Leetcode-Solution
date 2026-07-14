class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int n = cost.size();
        int sum = 0;
        int ans = 0;
        for (int a : cost) {
            ans += a;
        }
        for (int i = 2; i < n; i += 3) {
            sum += cost[i];
        }
        ans = ans - sum;
        return ans;
    }
};