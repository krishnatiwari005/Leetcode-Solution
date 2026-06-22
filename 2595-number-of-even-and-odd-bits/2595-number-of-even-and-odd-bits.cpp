class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd = 0;
        int even = 0;
        while (n > 0) {
            if (n % 2 == 1)
                even++;
            n = n / 2;
            if (n % 2 == 1)
                odd++;
            n = n / 2;
        }
        return {even, odd};
    }
};