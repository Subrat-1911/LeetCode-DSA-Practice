
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] < 0)
                lo = mid + 1;
            else
                hi = mid;
        }

        int FNI = lo;
        int neg = FNI;

        return max(pos, neg);
    }
};

