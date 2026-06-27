# 88. Merge Sorted Array

## 📝 Problem Details

| Category | Details |
|---|---|
| **Date Solved** | `14/06/26` |
| **Difficulty** | `Easy` |
| **Importance** | `Medium` |
| **Solve Status** | `Partial Hint` |
| **Time Taken** | `25 Minutes` |
| **Complexity** | `TC: O(n), SC: O(1)` |

## 🧠 Approach & Notes

### 1️⃣ First Approach
> 1st i thing about puting i, j, k in the 0th idx, and check which one is small, whether i++ or j++ with k++

### ❌ Failure Reason / Mistake
> when nums2 element is small, i place it on nums1[i] , after do this i saw the original nums[i] element is remove bcoz, i palece the nums2 element without storing nums[1] element to check further

### ✅ Correct Pattern
> after thinking some time, i thought put k on last idx of bigger array(nums1), j on last idx of nums2[], and i where the real element end in nums1 (given), then compair i and j, which one is bigger then put on nums1[k].

