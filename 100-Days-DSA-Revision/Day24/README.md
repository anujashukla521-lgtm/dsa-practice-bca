# 📘 Day 24 - Bubble Sort

## 📖 Overview
Day 24 of the **100-Day DSA Revision Series** focused on understanding **Bubble Sort**, one of the simplest comparison-based sorting algorithms. Along with the basic implementation, different variations such as descending order sorting, optimized Bubble Sort, step counting, and sorting strings were implemented to strengthen understanding of sorting techniques and algorithm optimization.

---

## 📚 Topics Covered
- Bubble Sort Algorithm
- Ascending Order Sorting
- Descending Order Bubble Sort
- Optimized Bubble Sort (Early Exit Technique)
- Counting Comparisons and Swaps
- Sorting Strings using Bubble Sort
- Time and Space Complexity Analysis
- Best, Average, and Worst Case Performance

---

## 💻 Programs Implemented

### 1. `bubble_sort_basic.cpp`
**Concepts Used:**
- Nested loops
- Swapping adjacent elements
- Ascending order sorting

**Purpose:**
Implements the standard Bubble Sort algorithm to sort integers in ascending order.

---

### 2. `bubble_sort_descending.cpp`
**Concepts Used:**
- Bubble Sort logic
- Descending order comparison
- Element swapping

**Purpose:**
Sorts an array in descending order using Bubble Sort.

---

### 3. `bubble_sort_optimized.cpp`
**Concepts Used:**
- Boolean flag (`isSorted`)
- Early termination optimization
- Reduced unnecessary passes

**Purpose:**
Stops the algorithm early if the array becomes sorted before completing all passes, improving performance on nearly sorted arrays.

---

### 4. `bubble_sort_step_counter.cpp`
**Concepts Used:**
- Bubble Sort
- Comparison counting
- Swap counting
- Algorithm analysis

**Purpose:**
Tracks the total number of comparisons and swaps performed during sorting to better understand Bubble Sort's efficiency.

---

### 5. `bubble_sort_strings.cpp`
**Concepts Used:**
- String comparison
- Lexicographical ordering
- Bubble Sort with `std::string`

**Purpose:**
Sorts a list of strings alphabetically using Bubble Sort.

---

## 📊 Complexity Analysis Practiced

| Case | Time Complexity |
|------|-----------------|
| Best Case (Optimized) | **O(n)** |
| Best Case (Basic) | **O(n²)** |
| Average Case | **O(n²)** |
| Worst Case | **O(n²)** |
| Space Complexity | **O(1)** |

---

## 🎯 Key Learnings
- Understood the working principle of Bubble Sort through adjacent element swapping.
- Learned how each pass places the largest (or smallest) element in its correct position.
- Explored the optimization technique using a flag to reduce unnecessary iterations.
- Compared ascending and descending implementations.
- Practiced measuring algorithm performance using comparison and swap counters.
- Applied Bubble Sort to both numeric and string data.
- Reinforced the importance of analyzing time complexity alongside implementation.

---

## ✅ Day Outcome
Successfully implemented five variations of Bubble Sort covering fundamental sorting, optimization, performance analysis, and string sorting. This strengthened both algorithmic understanding and practical implementation skills while preparing for more efficient sorting algorithms in upcoming days.

---

## ⏭️ Next Topic
**Selection Sort**