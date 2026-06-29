class Solution {
public:
    int countBinaryPalindromes(long long n) {
        if (n == 0) return 1; // "0"
        unsigned long long N = (unsigned long long)n;
        int maxLen = 0;
        unsigned long long tmp = N;
        while (tmp) { maxLen++; tmp >>= 1; }

        long long cnt = 1; // count 0

        // count all palindromes of lengths < maxLen
        for (int len = 1; len < maxLen; ++len) {
            int half = (len + 1) / 2;
            // number of choices for the first half with leading 1
            cnt += 1LL << (half - 1);
        }

        // handle length == maxLen

