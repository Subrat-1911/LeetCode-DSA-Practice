# 121. Best Time to Buy and Sell Stock

## 📝 Problem Details

| Category | Details |
|---|---|
| **Date Solved** | `02/07/26` |
| **Difficulty** | `Easy` |
| **Importance** | `Medium` |
| **Solve Status** | `Algorithm Hint` |
| **Time Taken** | `34 Minutes` |
| **Complexity** | `TC: O(n), SC: O(1)` |

## 🧠 Approach & Notes

### 1️⃣ First Approach
> initially i think about sell and buy as day insort of max profit

### ❌ Failure Reason / Mistake
> we did not need to store tha sell and buying day, we just return the max profit,

### ✅ Correct Pattern
> assing buy to 0th idx of arr, then buy= min(current i and buy), here we assing the min value to buy, then cal profit , profit = i-buy; then store the in max profit, maxPorfit=max(maxPrfit,profit )

