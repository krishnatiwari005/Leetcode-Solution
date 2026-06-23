class Solution {
public:
    int maxDistance(string moves) {
        int x2 = 0, y2 = 0;
        int cnt = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'U') {
                y2++;
            }
            if (moves[i] == 'D') {
                y2--;
            }
            if (moves[i] == 'L') {
                x2--;
            }
            if (moves[i] == 'R') {
                x2++;
            }
            if (moves[i] == '_') {
                cnt++;
            }
        }
        return (abs(x2) + abs(y2)) + cnt;
    }
};