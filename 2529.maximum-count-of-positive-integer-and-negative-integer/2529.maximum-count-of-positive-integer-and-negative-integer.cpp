                lo = mid + 1;
            else
                hi = mid;
        }

        int FPI = lo;
        int pos = n - FPI;


        // First non-negative index
        lo = 0;
        hi = n ;

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] < 0)

