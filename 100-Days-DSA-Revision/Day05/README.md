# Day 05 - Two Pointers

## Overview

Day 05 of my 100-Day DSA Revision Series focused on the **Two Pointers Technique**. This approach uses two indices to traverse a data structure efficiently and is widely used in array and string-based problems to reduce unnecessary iterations and improve performance.

---

## Topics Covered

* Introduction to Two Pointers
* Opposite Direction Pointers
* Pointer Initialization
* Pointer Movement Logic
* Reversing Arrays using Two Pointers
* Palindrome Checking using Two Pointers
* Time Complexity Analysis
* Space Complexity Analysis

---

## Programs Implemented

### 1. Reverse Array Using Two Pointers

**File Name:** `reverse_array.cpp`

**Concepts Used:**

* Vector
* Two Pointers
* Swapping Elements
* Loop Control

**Description:**
Reversed an array by placing one pointer at the beginning and another at the end. Elements were swapped while the pointers moved toward each other until they met.

**Complexity:**

* Time Complexity: O(n)
* Space Complexity: O(1)

---

### 2. Palindrome Check Using Two Pointers

**File Name:** `palindrome_check.cpp`

**Concepts Used:**

* String Handling
* Two Pointers
* Conditional Statements
* Boolean Flag
* Early Termination (`break`)

**Description:**
Checked whether a string is a palindrome by comparing characters from both ends and moving inward. The process stops immediately when a mismatch is found.

**Complexity:**

* Time Complexity: O(n)
* Space Complexity: O(1)

---

## Complexity Analysis Practiced

| Problem          | Time Complexity | Space Complexity |
| ---------------- | --------------- | ---------------- |
| Reverse Array    | O(n)            | O(1)             |
| Palindrome Check | O(n)            | O(1)             |

---

## Key Learnings

* Two Pointers can significantly simplify array and string problems.
* Opposite-direction pointers are useful when comparing or swapping elements from both ends.
* The condition `left < right` prevents unnecessary comparisons.
* Palindrome checking can be performed efficiently without creating an additional string.
* Many interview questions build upon the Two Pointers pattern.

---

## Day Outcome

Successfully understood and implemented the fundamentals of the Two Pointers Technique through practical coding examples. Gained confidence in pointer movement, element comparison, and in-place operations with optimal time and space complexity.

---

