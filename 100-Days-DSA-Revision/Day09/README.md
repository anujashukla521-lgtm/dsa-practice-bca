# Day 09 - Frequency Counting

## Overview

Day 09 of my 100-Day DSA Revision Series focused on **Frequency Counting**, a fundamental technique used to determine how many times elements appear in a dataset. This topic introduced the use of **Hashing** through `unordered_map`, enabling efficient storage and retrieval of frequencies in constant average time.

Frequency Counting is widely used in problems involving duplicates, unique elements, most/least frequent elements, character counting, and query-based lookups.

---

## Topics Covered

* Frequency Counting
* Hashing using `unordered_map`
* Frequency Queries
* Character Frequency Counting
* Highest Frequency Element
* Lowest Frequency Element
* Traversing Hash Maps
* Time and Space Complexity Analysis

---

## Programs Implemented

### 1. `frequency_count.cpp`

**Concepts Used:**

* `unordered_map<int, int>`
* Counting occurrences of array elements
* Query-based frequency lookup

**Purpose:**
Build a frequency map of integers and answer frequency queries efficiently.

---

### 2. `highest_frequency.cpp`

**Concepts Used:**

* Hashing
* Map Traversal
* Tracking Maximum Frequency

**Purpose:**
Find the element with the highest frequency in an array.

---

### 3. `lowest_frequency.cpp`

**Concepts Used:**

* Hashing
* Map Traversal
* Tracking Minimum Frequency

**Purpose:**
Find the element with the lowest frequency in an array.

---

### 4. `character_frequency.cpp`

**Concepts Used:**

* `unordered_map<char, int>`
* String Traversal
* Character Frequency Counting

**Purpose:**
Count the frequency of each character in a string and answer character frequency queries.

---

## Complexity Analysis Practiced

### Frequency Counting

| Operation                | Time Complexity |
| ------------------------ | --------------- |
| Building Frequency Map   | O(N)            |
| Frequency Lookup         | O(1) Average    |
| Traversing Frequency Map | O(U)            |

Where:

* **N** = Total Elements
* **U** = Number of Unique Elements

### Space Complexity

```text
O(U)
```

Additional space is required to store frequencies of unique elements.

---

## Key Learnings

* Frequency Counting is a common DSA pattern.
* Hashing significantly reduces lookup time compared to brute-force approaches.
* `unordered_map` provides average O(1) insertion and lookup.
* Frequency maps can be used to solve multiple problems using the same core logic.
* Character frequency counting follows the same pattern as integer frequency counting.
* Highest and lowest frequency elements can be identified by traversing the frequency map once.

---

## Day Outcome

Successfully implemented and practiced four frequency-counting problems using hashing and `unordered_map`. Strengthened understanding of frequency-based problem-solving and improved confidence in recognizing hashing patterns frequently used in coding interviews and competitive programming.
