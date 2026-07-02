# 14. Longest Common Prefix

## 📝 Problem Details

| Category | Details |
|---|---|
| **Date Solved** | `02/07/26` |
| **Difficulty** | `Easy` |
| **Importance** | `Medium` |
| **Solve Status** | `Full Solution` |
| **Time Taken** | `15 Minutes` |
| **Complexity** | `TC: O(n²), SC: O(1)` |

## 🧠 Approach & Notes

### 1️⃣ First Approach
> initially i am unable to compair char of word

### ❌ Failure Reason / Mistake
> i do not thought about 2d array, thats why i am unable to asscess rach char to compair

### ✅ Correct Pattern
> it take loop under loop, in ouer loop i change char of string , inner loop change word , and start with 1, bcoz we take 0th word as referance, after loop check if(i>=arr[j].size() || arr[j][i]!=arr[0][i]; return s, other wise s+=arr[0][i];

