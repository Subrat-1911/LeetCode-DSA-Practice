# 238. Product of Array Except Self

## 📝 Problem Details

| Category | Details |
|---|---|
| **Date Solved** | `03/07/26` |
| **Difficulty** | `Medium` |
| **Importance** | `Medium` |
| **Solve Status** | `Algorithm Hint` |
| **Time Taken** | `45 Minutes` |
| **Complexity** | `TC: O(n), SC : O(n)` |

## 🧠 Approach & Notes

### 1️⃣ First Approach
> initially i thought find the product of all element, then replace that element using product/nums[i].

### ❌ Failure Reason / Mistake
> but in question it said we cant use '/' oprater so i cant devide.

### ✅ Correct Pattern
> but at that time we can use prefix sum concept, cre pre vector and put product of element before that,since  before oth idx, there is no element we put 1st element of pre is 1.  and another vector suf, like wise put product of element right of that,,since  after (n-1)th idx, there is no element we put last element of suf is 1 and last create a new vector ans to multiply both vector, **here we can use a sing vectore only pre,

