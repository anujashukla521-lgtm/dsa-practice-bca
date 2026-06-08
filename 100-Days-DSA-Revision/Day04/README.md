# Day 04 - Sliding Window

## Overview

Day 04 of my 100-Day DSA Revision Series focused on the **Sliding Window** technique. This optimization pattern is used to efficiently solve problems involving contiguous subarrays or substrings by reusing computations from previous windows instead of recalculating values repeatedly.

The Sliding Window approach significantly reduces time complexity and is a common pattern in coding interviews and competitive programming.

---

## Topics Covered

* Introduction to Sliding Window
* Fixed-Size Sliding Window
* Incoming and Outgoing Elements
* Window Sum Optimization
* Time Complexity Improvement
* Contiguous Subarray Processing

---

## Programs Implemented

### 1. Maximum Sum Subarray of Size K

**File:** `maximum_sum_subarray_k.cpp`

**Concepts Used:**

* Sliding Window Technique
* Vectors
* Iteration
* Window Sum Calculation
* Maximum Value Tracking

**Description:**
Finds the maximum sum of any contiguous subarray of size `K` by maintaining a running window sum and updating it efficiently as the window slides through the array.

---

## Complexity Analysis Practiced

### Maximum Sum Subarray of Size K

| Approach       | Time Complexity | Space Complexity |
| -------------- | --------------- | ---------------- |
| Brute Force    | O(n × k)        | O(1)             |
| Sliding Window | O(n)            | O(1)             |

---

## Key Learnings

* Sliding Window is useful for problems involving contiguous elements.
* Fixed-size windows maintain a constant window length throughout the process.
* Instead of recalculating every window, update the current window using:

```cpp
sum = sum - outgoing_element + incoming_element;
```

* Each element is processed efficiently, leading to improved performance.
* Sliding Window reduces unnecessary repeated calculations.

---

## Day Outcome

Successfully understood and implemented the Sliding Window technique for a fixed-size window problem.

Built a strong foundation for solving more advanced Sliding Window problems involving:

* Maximum/Minimum values in windows
* Negative numbers in windows
* Variable-size windows
* String-based Sliding Window problems

---

## Next Topic

**Two Pointers**
