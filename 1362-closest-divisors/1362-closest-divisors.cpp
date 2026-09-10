class Solution {
public:
    vector<int> closestDivisors(int num) {
     vector<int> ans = {1, num + 1};
        int minDiff = num;

        for (int x = num + 1; x <= num + 2; x++) {
            for (int i = sqrt(x); i >= 1; i--) {
                if (x % i == 0) {
                    int a = i;
                    int b = x / i;

                    if (b - a < minDiff) {
                        minDiff = b - a;
                        ans = {a, b};
                    }

                    break;
                }
            }
        }

        return ans;
    }
};