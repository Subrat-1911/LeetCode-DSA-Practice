# 21. Merge Two Sorted Lists

## 📝 Problem Details

| Category | Details |
|---|---|
| **Date Solved** | `01/07/26` |
| **Difficulty** | `Easy` |
| **Importance** | `Medium` |
| **Solve Status** | `Algorithm Hint` |
| **Time Taken** | `14 Minutes` |
| **Complexity** | `TC: O(n), SC: O(1)` |

## 🧠 Approach & Notes

### 1️⃣ First Approach
> initially i think check 1st node of both list , start head node which one is smaller, then move forward smaller,

### ❌ Failure Reason / Mistake
> as i saw 1st approch after linking 1st small node , i saw the link of that list was remove and i lost that list,

### ✅ Correct Pattern
> currect approch is create a new node call dummy, then start temp pointer on dummy , then check which one is small , temp=smallnode, temp->next, and smallnode->next till list1!=NULL && list2!=NULL;

