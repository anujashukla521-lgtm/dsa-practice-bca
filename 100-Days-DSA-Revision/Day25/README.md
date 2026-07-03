# Day 25 - Selection Sort

## 📌 Overview

Day 25 of my **100-Day DSA Revision Series** focused on **Selection Sort**, a simple comparison-based sorting algorithm. The goal was to understand its working mechanism, analyze its time and space complexity, implement different variations, and compare its behavior with other elementary sorting algorithms like Bubble Sort.

---

## 📚 Topics Covered

- Selection Sort Algorithm
- Working of Selection Sort
- Finding the Minimum Element
- Swapping Elements
- Ascending Order Sorting
- Descending Order Sorting
- Sorting Strings
- Selection Sort using `vector`
- Counting Comparisons and Swaps
- Optimized Selection Sort
- Dry Run / Trace Visualization
- Time Complexity Analysis
- Space Complexity Analysis
- Stability and Adaptiveness
- In-place Sorting

---

## 💻 Programs Implemented

### 1. `selection_sort_basic.cpp`
**Concepts Used:**
- Basic Selection Sort
- Ascending Order Sorting
- Vector Traversal
- Element Swapping

---

### 2. `selection_sort_descending.cpp`
**Concepts Used:**
- Descending Order Sorting
- Modified Comparison Logic

---

### 3. `selection_sort_optimized.cpp`
**Concepts Used:**
- Conditional Swapping
- Avoiding Unnecessary Swaps
- Improved Implementation

---

### 4. `selection_sort_strings.cpp`
**Concepts Used:**
- Sorting Strings
- Lexicographical Comparison
- String Manipulation

---

### 5. `selection_sort_trace.cpp`
**Concepts Used:**
- Step-by-Step Visualization
- Printing Array After Each Pass
- Algorithm Dry Run

---

### 6. `selection_sort_with_count.cpp`
**Concepts Used:**
- Counting Comparisons
- Counting Swaps
- Algorithm Analysis

---

## 📊 Complexity Analysis Practiced

| Case | Time Complexity |
|------|-----------------|
| Best Case | **O(n²)** |
| Average Case | **O(n²)** |
| Worst Case | **O(n²)** |

**Space Complexity:** `O(1)`

### Properties

- **Stable:** ❌ No
- **In-place:** ✅ Yes
- **Adaptive:** ❌ No

---

## 🧠 Key Learnings

- Selection Sort repeatedly selects the minimum element from the unsorted portion and places it in its correct position.
- Unlike Bubble Sort, Selection Sort performs significantly fewer swaps.
- The number of comparisons remains the same regardless of the initial order of elements.
- The algorithm is simple to implement but inefficient for large datasets due to its quadratic time complexity.
- Conditional swapping can eliminate unnecessary swap operations without changing the overall complexity.
- Tracing each pass helps visualize the growth of the sorted portion of the array.

---

## ✅ Day Outcome

- Successfully implemented multiple variations of Selection Sort.
- Practiced sorting in both ascending and descending order.
- Implemented Selection Sort for strings.
- Traced the algorithm pass by pass for better visualization.
- Counted comparisons and swaps to analyze algorithm performance.
- Learned optimization techniques and interview-focused implementation practices.

---

## ⏭️ Next Topic

**Day 26:** Insertion Sort