# 367. Valid Perfect Square

## 📝 Problem Details

| Category | Details |
|---|---|
| **Date Solved** | `16/06/26` |
| **Difficulty** | `Easy` |
| **Importance** | `Time_Optional` |
| **Solve Status** | `Independent` |
| **Time Taken** | `7 Minutes` |
| **Complexity** | `TC: O(log n), SC: O(1)` |
| **Confidence** | `High` |

## 🧠 Approach & Notes

### 1️⃣ First Approach
> 1st i start with sqrt method, but in question said we cant use sqrt inbuid method

### ❌ Failure Reason / Mistake
> There is a sigle mistake i made the mid is int data type, in some input it show interger overflow., so i use long long

### ✅ Correct Pattern
> use binary search to reduce search space, if mid*mid==num return true; else change lo and hi position

