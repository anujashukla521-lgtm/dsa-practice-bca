# Day 23 - Binary Search Variations

## 📌 Overview

Day 23 of my **100-Day DSA Revision Series** focused on understanding **Binary Search Variations**. Instead of performing a standard binary search, these problems require modifying the search logic to locate specific positions or satisfy different conditions while maintaining logarithmic time complexity.

---

## 📚 Topics Covered

* Binary Search Variations
* First Occurrence of an Element
* Last Occurrence of an Element *(upcoming)*
* Understanding search direction after finding the target
* Handling duplicate elements in a sorted array

---

## 💻 Programs Implemented

### 1. `first_occurrence.cpp`

**Concepts Used:**

* Binary Search
* Modified Search Logic
* Tracking Potential Answer
* Sorted Array
* Time Complexity Optimization

**Description:**
Implemented a modified binary search to find the **first occurrence** of a target element in a sorted array. Instead of returning immediately after finding the target, the algorithm stores the current index and continues searching the left half to ensure the earliest occurrence is found.

---

## 📊 Complexity Analysis

| Algorithm        | Time Complexity | Space Complexity |
| ---------------- | --------------: | ---------------: |
| First Occurrence |    **O(log n)** |         **O(1)** |

---

## 🎯 Key Learnings

* Standard Binary Search can be adapted to solve multiple search-related problems.
* After finding the target, the search direction determines whether we obtain the first or last occurrence.
* Maintaining a temporary answer variable allows the algorithm to continue searching for a better result.
* Binary Search requires the input array to be sorted.
* Using `low + (high - low) / 2` prevents potential integer overflow.

---

## ✅ Day Outcome

Successfully implemented the **First Occurrence using Binary Search** and strengthened my understanding of modifying binary search logic for duplicate elements.

---

## ⏭️ Next Topic

* Last Occurrence of an Element
* Count Occurrences
* Lower Bound
* Upper Bound
* Search Insert Position
* Additional Binary Search Variations
