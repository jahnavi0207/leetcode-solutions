class Solution {
public:
    string baseNeg2(int num) {
        if (num == 0)
            return "0";

        string ans = "";

        while (num != 0) {
            int rem = num % -2;
            num /= -2;

            if (rem < 0) {
                rem += 2;
                num++;
            }

            ans += char('0' + rem);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};