# Day 27 – Insertion Sort (Deep Dive)

## 📖 Overview

Day 27 was originally planned for **Merge Sort**, but instead of rushing into a more complex algorithm, I chose to strengthen my understanding of **Insertion Sort**.

Today was focused on implementing different variations of the algorithm, understanding how element shifting works, and analyzing its performance by counting comparisons and shifts.

This approach helped reinforce the fundamentals before moving on to Divide and Conquer algorithms like Merge Sort and Quick Sort.

---

## 📚 Topics Covered

* Insertion Sort Algorithm
* Working of Insertion Sort
* Element Shifting Technique
* Performance Analysis
* Counting Comparisons
* Counting Shifts
* Best, Average, and Worst Case Analysis

---

## 💻 Programs Implemented

### 1. `insertion_sort.cpp`

**Concepts Used:**

* Insertion Sort
* Nested Loops
* Element Comparison
* In-place Sorting

**Description:**

* Implemented the basic version of Insertion Sort.
* Sorted the array by inserting each element into its correct position in the sorted portion of the array.

---

### 2. `insertion_sort_analysis.cpp`

**Concepts Used:**

* Insertion Sort
* Element Shifting
* Performance Analysis
* Counting Comparisons
* Counting Shifts

**Description:**

* Implemented Insertion Sort using the shifting technique.
* Counted the number of comparisons performed.
* Counted the number of element shifts during sorting.
* Gained a deeper understanding of the algorithm's internal working.

---

## 📊 Complexity Analysis Practiced

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | **O(n)**        |
| Average Case | **O(n²)**       |
| Worst Case   | **O(n²)**       |

**Space Complexity:** **O(1)**

**Algorithm Type:**

* In-place
* Stable
* Comparison-Based

---

## 🎯 Key Learnings

* Understood how Insertion Sort builds a sorted portion of the array.
* Learned why shifting elements is preferred over repeated swapping.
* Explored how comparisons and shifts can be analyzed separately.
* Improved understanding of algorithm analysis beyond simply implementing the code.
* Strengthened the foundation before moving to Divide and Conquer sorting algorithms.

---

## ✅ Day Outcome

* Successfully implemented two versions of Insertion Sort.
* Improved understanding of the algorithm through detailed analysis.
* Practiced writing cleaner and more interview-oriented implementations.
* Reinforced sorting fundamentals before starting Merge Sort.

---

## ⏭️ Next Topic

* Merge Sort
* Divide and Conquer
* Merge Function
* Recursive Sorting
* Quick Sort (if time permits)
