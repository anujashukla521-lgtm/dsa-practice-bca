# Day 03 - Prefix Sum

## Overview

Day 03 of my 100-Day DSA Revision Series focused on understanding and implementing the Prefix Sum technique. Prefix Sum is a preprocessing method that allows efficient range-based queries by storing cumulative sums of array elements.

---

## Topics Covered

* Prefix Sum Array
* Building a Prefix Sum Array
* Range Sum Queries
* Handling Edge Cases (`L = 0`)
* Time and Space Complexity Analysis

---

## Programs Implemented

### 1. Build Prefix Sum Array

**File:** `01_build_prefix_sum.cpp`

**Concepts Used:**

* Arrays/Vectors
* Prefix Sum Construction
* Loops
* Dynamic Input Handling

**Description:**
Constructed a Prefix Sum array where each index stores the cumulative sum of all elements from the beginning of the array up to that index.

---

### 2. Range Sum Query Using Prefix Sum

**File:** `02_range_sum_query.cpp`

**Concepts Used:**

* Prefix Sum Technique
* Range-Based Queries
* Conditional Logic
* Constant-Time Query Processing

**Description:**
Used the Prefix Sum array to efficiently calculate the sum of elements between indices `L` and `R` in O(1) time.

---

## Complexity Analysis Practiced

### Building Prefix Sum Array

* **Time Complexity:** O(n)
* **Space Complexity:** O(n)

### Range Sum Query

* **Time Complexity:** O(1)
* **Space Complexity:** O(1) (excluding the Prefix Sum array)

---

## Key Learnings

* Prefix Sum stores cumulative sums to avoid repeated calculations.

* A Prefix Sum array can be built in a single traversal of the input array.

* Range sum queries can be answered efficiently using:

  `prefix[R] - prefix[L - 1]`

* When `L = 0`, the answer is simply:

  `prefix[R]`

* Preprocessing data can significantly improve query performance.

---

## Day Outcome

Successfully understood the intuition behind Prefix Sum, implemented Prefix Sum construction, and solved range sum queries using the Prefix Sum technique.

---

## Next Topic

Sliding Window Technique
