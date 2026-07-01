# 206. Reverse Linked List

## 📝 Problem Details

| Category | Details |
|---|---|
| **Date Solved** | `01/07/26` |
| **Difficulty** | `Easy` |
| **Importance** | `Medium` |
| **Solve Status** | `Algorithm Hint` |
| **Time Taken** | `11 Minutes` |
| **Complexity** | `TC: O(n), SC: O(1)` |

## 🧠 Approach & Notes

### 1️⃣ First Approach
> initially i cannot think any approch, i just take a hint from google

### ❌ Failure Reason / Mistake
> My looping condition was wrong bcoz i thought that we can't say currr->next if next is NULL, but we can access currr->next if next is NULL, but we cant access currr->next if curr is NULL,

### ✅ Correct Pattern
> creat 3 node pre, curr, nxt, intially pre was NULL, curr was head and nxt was curr->next use loop whilee curr!=NULL, then next=curr->next; curr->next=pre;pre=curr;curr=next; return pre;

