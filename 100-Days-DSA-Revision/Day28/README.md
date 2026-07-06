# 📅 Day 28 – Merge Sort & Quick Sort

## 📌 Overview

Day 28 focused on learning and implementing two of the most important Divide and Conquer sorting algorithms: **Merge Sort** and **Quick Sort**. Along with coding both algorithms from scratch, I explored their recursive execution, partitioning process, time complexities, and interview-oriented concepts.

---

## 📚 Topics Covered

* Divide and Conquer Technique
* Merge Sort
* Merge Function
* Recursive Array Splitting
* Quick Sort
* Hoare Partition Scheme
* Pivot Selection
* Recursion in Sorting Algorithms
* Stable vs Unstable Sorting
* In-place vs Non In-place Sorting
* Time and Space Complexity Analysis

---

## 💻 Programs Implemented

### 1. `merge_sort.cpp`

**Concepts Used:**

* Divide and Conquer
* Recursion
* Merge Operation
* Temporary Vector
* Stable Sorting

**Features:**

* Recursive array division
* Merging sorted subarrays
* Overflow-safe midpoint calculation
* Stable implementation using `<=`

---

### 2. `quick_sort.cpp`

**Concepts Used:**

* Divide and Conquer
* Recursion
* Hoare Partition Algorithm
* Pivot-based Sorting
* In-place Sorting

**Features:**

* First element as pivot
* Two-pointer partitioning
* Recursive sorting of left and right partitions

---

## 📊 Complexity Analysis Practiced

### Merge Sort

* **Best Case:** O(n log n)
* **Average Case:** O(n log n)
* **Worst Case:** O(n log n)
* **Space Complexity:** O(n)
* **Stable:** ✅ Yes
* **In-place:** ❌ No

---

### Quick Sort

* **Best Case:** O(n log n)
* **Average Case:** O(n log n)
* **Worst Case:** O(n²)
* **Space Complexity:** O(log n) (Average)
* **Stable:** ❌ No
* **In-place:** ✅ Yes

---

## 🎯 Key Learnings

* Understood the Divide and Conquer strategy.
* Learned how Merge Sort recursively divides the array and merges sorted halves.
* Visualized the recursion tree of Merge Sort.
* Understood the working of Hoare Partition in Quick Sort.
* Learned how pivot selection affects Quick Sort's performance.
* Compared Merge Sort and Quick Sort based on stability, space usage, and practical performance.
* Strengthened understanding of recursion through two advanced sorting algorithms.

---

## ✅ Day Outcome

Successfully implemented **Merge Sort** and **Quick Sort** from scratch while understanding their recursive workflow, partitioning logic, complexity analysis, and interview-oriented concepts. This day strengthened my understanding of Divide and Conquer algorithms and recursion.
