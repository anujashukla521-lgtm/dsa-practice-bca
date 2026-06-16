# Day 11 - Anagrams

## Overview

Day 11 focused on solving Anagram-based problems using different approaches such as sorting, hashing, frequency counting, and hash maps. The goal was to understand how character frequencies can be used to identify and group strings efficiently.

---

## Topics Covered

* Anagrams
* Sorting-Based Approach
* Hashing / Frequency Count
* Character Frequency Arrays
* Hash Maps (`unordered_map`)
* String Manipulation

---

## Programs Implemented

### 1. valid_anagram_sorting.cpp

**Concepts Used:**

* String Sorting
* String Comparison
* STL `sort()`

**Approach:**

* Sort both strings.
* Compare the sorted strings.
* If equal, the strings are anagrams.

**Time Complexity:** O(n log n)
**Space Complexity:** O(1)

---

### 2. valid_anagram_hashing.cpp

**Concepts Used:**

* Hashing
* Frequency Counting
* Arrays

**Approach:**

* Count character frequencies of the first string.
* Decrease frequencies using the second string.
* If all frequencies become zero, the strings are anagrams.

**Time Complexity:** O(n)
**Space Complexity:** O(1)

---

### 3. group_anagrams.cpp

**Concepts Used:**

* Hash Maps (`unordered_map`)
* Vectors
* String Sorting
* Grouping Similar Data

**Approach:**

* Sort each word to create a unique key.
* Store words having the same sorted key in the same group.
* Print all grouped anagrams.

**Time Complexity:** O(n × k log k)
**Space Complexity:** O(n × k)

Where:

* n = Number of words
* k = Average length of each word

---

## Complexity Analysis Practiced

| Problem                 | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Valid Anagram (Sorting) | O(n log n)      | O(1)             |
| Valid Anagram (Hashing) | O(n)            | O(1)             |
| Group Anagrams          | O(n × k log k)  | O(n × k)         |

---

## Key Learnings

* Learned multiple approaches to solve Anagram problems.
* Understood the difference between sorting and hashing solutions.
* Practiced frequency counting using arrays.
* Learned how to use `unordered_map<string, vector<string>>`.
* Understood how sorted strings can act as unique keys for grouping anagrams.
* Improved understanding of string-based hashing problems commonly asked in interviews.

---

## Day Outcome

Successfully implemented and analyzed multiple Anagram-based problems using sorting, hashing, and hash maps. Strengthened understanding of string manipulation and frequency-based problem-solving techniques.
