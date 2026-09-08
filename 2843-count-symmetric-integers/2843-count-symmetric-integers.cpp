class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
    int c = 0;

    for(int n = low; n <= high; n++) {
        string s = to_string(n);
        int len = s.size();

        if(len % 2 != 0) continue;

        int lsum = 0, rsum = 0;

        for(int i = 0; i < len/2; i++) {
            lsum += s[i] - '0';
        }

        for(int i = len/2; i < len; i++) {
            rsum += s[i] - '0';
        }

        if(lsum == rsum)
            c++;
    }

    return c;
}
};