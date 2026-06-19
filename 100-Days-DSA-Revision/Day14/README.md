# Day 14 – Mixed String Problems

## Overview

Day 14 focused on solving mixed string-based problems and strengthening string traversal, character processing, and pattern recognition skills. The main focus was understanding how consecutive character grouping differs from frequency counting and implementing an interview-level string compression solution.

---

## Topics Covered

* String Traversal
* Character Processing
* Consecutive Character Counting
* Run-Length Encoding (String Compression)
* String Rotation Concept
* STL String Functions (`to_string()`, `find()`)
* Function-Based Problem Solving
* Edge Case Handling

---

## Programs Implemented

### 1. String Compression (Interview-Level Version)

**File:** `string_compression.cpp`

**Concepts Used:**

* Run-Length Encoding
* String construction
* Function design
* Edge case handling

**Description:**
Built a compressed string and returned the original string whenever compression did not reduce the string length.

**Examples:**
Input: `aaabbcccc` → Output: `a3b2c4`
Input: `abcd` → Output: `abcd`

---

### 2. String Rotation Check

**File:** `string_rotation.cpp`

**Concepts Used:**

* String concatenation
* Substring search
* Rotation property

**Description:**
Verified whether one string is a rotation of another using the observation that every rotation of a string exists as a substring of the original string concatenated with itself.

**Example:**
Input:

```cpp
s1 = "abcd";
s2 = "cdab";
```

Output:

```cpp
true
```

---

## Complexity Analysis Practiced

### String Compression

* Time Complexity: **O(n)**
* Space Complexity: **O(n)**

### String Rotation

* Time Complexity: **O(n)**
* Space Complexity: **O(n)**

---

## Key Learnings

* String Compression is not a frequency-counting problem.
* Consecutive occurrences must be tracked separately.
* `unordered_map` cannot solve compression because it loses grouping information.
* Functions should return results instead of directly printing them.
* `const string&` avoids unnecessary string copying.
* `to_string()` converts integers into strings for concatenation.
* `find()` can be used to search for substrings inside a string.
* Every rotation of a string exists inside `s + s`.

---

## Day Outcome

Successfully implemented both basic and interview-level String Compression solutions, practiced function-based design, handled edge cases, and learned the core logic behind the String Rotation interview problem.

---

## Next Topic

**Day 15 – Revision Day**

* Review Arrays
* Review Two Pointers
* Review String Problems
* Revisit previously solved questions
* Strengthen problem-solving speed and pattern recognition

---

**100-Day DSA Revision Series Progress:** Day 14/100 Completed ✅
