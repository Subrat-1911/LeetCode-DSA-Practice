# 448. Find All Numbers Disappeared in an Array

## 📝 Problem Details

| Category | Details |
|---|---|
| **Date Solved** | `02/07/26` |
| **Difficulty** | `Easy` |
| **Importance** | `Medium` |
| **Solve Status** | `Algorithm Hint` |
| **Time Taken** | `39 Minutes` |
| **Complexity** | `TC: O(n), SC: O(1)` |

## 🧠 Approach & Notes

### 1️⃣ First Approach
> i try to make it sort, then compair the idx with that value,

### ❌ Failure Reason / Mistake
> by sorting the tc will be NlogN, and when i compair i with val(i) , after 1st mining number then isx never same as value

### ✅ Correct Pattern
> traves the array, go to nums[nums[i]], make it negative, at last which idx is positive idx +1 is mising

