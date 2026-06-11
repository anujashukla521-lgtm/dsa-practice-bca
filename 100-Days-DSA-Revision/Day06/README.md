# Day 06 - Array Rotation

## Overview

Day 06 of my 100-Day DSA Revision Series focused on **Array Rotation**. The goal was to understand different rotation techniques, implement left and right rotations, and learn the optimal reversal algorithm approach for rotating an array by K positions.

---

## Topics Covered

* Left Rotation by One Position
* Right Rotation by One Position
* Left Rotation by K Positions
* Right Rotation by K Positions
* Reversal Algorithm
* Understanding `k % n`
* Edge Case Handling (`k = 0`)
* Time and Space Complexity Analysis

---

## Programs Implemented

### 1. left_rotate_by_one.cpp

**Concepts Used:**

* Array Traversal
* Element Shifting
* Temporary Variable Storage

**Description:**
Rotates an array one position to the left by storing the first element, shifting all remaining elements left, and placing the stored element at the end.

---

### 2. right_rotate_by_one.cpp

**Concepts Used:**

* Array Traversal
* Element Shifting
* Temporary Variable Storage

**Description:**
Rotates an array one position to the right by storing the last element, shifting all elements right, and placing the stored element at the beginning.

---

### 3. left_rotate_by_k.cpp

**Concepts Used:**

* Reversal Algorithm
* Functions
* Pass by Reference
* Array Manipulation

**Description:**
Performs left rotation by K positions using the optimal reversal algorithm.

---

### 4. right_rotate_by_k.cpp

**Concepts Used:**

* Reversal Algorithm
* Functions
* Pass by Reference
* Array Manipulation

**Description:**
Performs right rotation by K positions using the optimal reversal algorithm.

---

## Complexity Analysis Practiced

| Operation                                | Time Complexity | Space Complexity |
| ---------------------------------------- | --------------- | ---------------- |
| Left Rotation by One                     | O(n)            | O(1)             |
| Right Rotation by One                    | O(n)            | O(1)             |
| Left Rotation by K (Reversal Algorithm)  | O(n)            | O(1)             |
| Right Rotation by K (Reversal Algorithm) | O(n)            | O(1)             |

---

## Key Learnings

* Learned the difference between left and right array rotations.
* Understood why `k = k % n` is necessary when the number of rotations exceeds the array size.
* Implemented the reversal algorithm for both left and right rotations.
* Revised the concept of pass-by-value versus pass-by-reference in C++.
* Practiced debugging indexing and traversal logic.
* Explored edge case handling for `k = 0`.

---

## Day Outcome

Successfully implemented multiple array rotation techniques and mastered the optimal reversal algorithm approach. Strengthened understanding of array manipulation, references, functions, and complexity analysis while improving debugging and problem-solving skills.
