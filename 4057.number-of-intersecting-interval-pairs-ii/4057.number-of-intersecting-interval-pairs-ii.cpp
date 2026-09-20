            int current_end = intervals[i][1];
            
            // Look for the first interval after 'i' that starts AFTER current_end
            // We use a dummy target vector {current_end, 2e9} to compare with intervals[j][0]
            auto it = upper_bound(intervals.begin() + i + 1, intervals.end(), vector<int>{current_end, (int)2e9});
            
        for (int i = 0; i < n; i++) {
        // 2. Count overlapping intervals using Binary Search
        
        long long count = 0;
        
        sort(intervals.begin(), intervals.end());
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        // 1. Sort intervals by their start time
public:
class Solution {
        int n = intervals.size();

