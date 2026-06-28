
        // count all palindromes of lengths < maxLen
        for (int len = 1; len < maxLen; ++len) {
            int half = (len + 1) / 2;
            // number of choices for the first half with leading 1
            cnt += 1LL << (half - 1);
        }

        // handle length == maxLen
        {
            int len = maxLen;
            int half = (len + 1) / 2;
            unsigned long long start = 1ULL << (half - 1);
            // extract the top 'half' bits of N as prefix
            unsigned long long prefix = N >> (len - half);
            if (prefix >= start) {
                // all prefixes strictly smaller than 'prefix'
                cnt += (long long)(prefix - start);
                // build palindrome from this prefix and check <= N
                unsigned long long pal = prefix;

