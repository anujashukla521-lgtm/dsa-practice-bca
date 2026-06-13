# Day 07 – Kadane's Algorithm

## Overview

Day 07 of my 100-Day DSA Revision Series focused on **Kadane's Algorithm**, an efficient technique used to find the maximum sum subarray in a given array. This algorithm optimizes the brute-force approach by solving the problem in linear time.

---

## Topics Covered

* Maximum Subarray Sum Problem
* Kadane's Algorithm
* Running Sum Concept
* Handling Negative Prefix Sums
* Tracking Start and End Indices of Maximum Subarray
* Printing the Maximum Sum Subarray
* Time and Space Complexity Analysis

---

## Programs Implemented

### 1. `kadanes_algorithm.cpp`

**Concepts Used:**

* Running Sum
* Maximum Sum Tracking
* Kadane's Algorithm

**Description:**
Finds the maximum sum of any contiguous subarray in linear time.

---

### 2. `kadanes_with_indices.cpp`

**Concepts Used:**

* Kadane's Algorithm
* Index Tracking
* Subarray Reconstruction

**Description:**
Finds the maximum subarray sum along with the starting and ending indices and prints the actual maximum-sum subarray.

---

## Complexity Analysis Practiced

### Kadane's Algorithm

| Complexity Type  | Value |
| ---------------- | ----- |
| Time Complexity  | O(n)  |
| Space Complexity | O(1)  |

**Reason:**

* The array is traversed only once.
* No additional data structures are used apart from a few variables.

---

## Key Learnings

* A negative running sum should be discarded because it reduces the sum of future subarrays.
* Kadane's Algorithm solves the Maximum Subarray Sum problem efficiently in O(n) time.
* The order of updating `maxSum` and resetting `sum` is important, especially for arrays containing all negative values.
* Start and end indices can be tracked using additional variables without increasing time complexity.
* The actual maximum-sum subarray can be reconstructed using the stored indices.

---

## Day Outcome

Successfully implemented Kadane's Algorithm from scratch and extended it to:

* Find the maximum subarray sum
* Track starting and ending indices
* Print the maximum-sum subarray

This revision strengthened my understanding of one of the most commonly asked array algorithms in coding interviews.

---

## Next Topic

**Day 08 – String Basics**

* String Operations
* Traversal Techniques
* Palindrome Checking
* Character Frequency Counting
* String Reversal
