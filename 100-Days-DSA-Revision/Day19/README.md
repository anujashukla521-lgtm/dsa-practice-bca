# Day 19 - Medium String Problems

## Overview

Day 19 focused on medium-level string problem solving. The goal was to strengthen string traversal, character comparison, nested loop logic, and edge-case handling through practical implementation.

---

## Topics Covered

* String Traversal
* Character Comparison
* Nested Loops on Strings
* Common Prefix Identification
* Edge Case Handling
* Time and Space Complexity Analysis

---

## Programs Implemented

### 1. longest_common_prefix.cpp

**Concepts Used:**

* Vector of Strings
* Nested Loops
* Character-by-Character Comparison
* Early Termination on Mismatch
* String Construction

**Problem Statement:**
Find the longest common prefix among a group of strings.

**Example:**
Input:

```cpp
{"flower", "flow", "flight"}
```

Output:

```cpp
fl
```

---

## Complexity Analysis Practiced

### Longest Common Prefix

* **Time Complexity:** O(N × M)

  * N = Number of Strings
  * M = Length of the Shortest String

* **Space Complexity:** O(1)

  * Excluding the output string

---

## Key Learnings

* Learned how to compare characters at the same index across multiple strings.
* Understood the importance of checking string length before accessing an index.
* Practiced stopping the algorithm immediately when a mismatch is found.
* Improved understanding of nested-loop based string traversal.
* Identified the importance of Hash Maps for solving certain medium-level string problems such as Isomorphic Strings.

---

## Day Outcome

Successfully implemented and understood the Longest Common Prefix problem, including its logic, dry run, edge cases, and complexity analysis. Also explored the concept behind Isomorphic Strings and recognized the need for stronger Hash Map fundamentals before attempting similar problems.
