class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        int end = 31;
        for (int bit = 31; bit >= 0; bit--) {
            if (n & (1 << bit)) {
                end = bit;
                break;
            }
        }
        int res = 0;
        for (int bit = 0; bit <= end; bit++) {
            if ((n & (1 << bit)) == 0) {
                res += (1 << bit);
            }
        }
        return res;
    }
};
