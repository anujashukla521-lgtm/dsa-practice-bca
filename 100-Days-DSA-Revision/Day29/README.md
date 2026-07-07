# Day 29 - Counting Sort

## 📌 Overview

Day 29 focused on implementing **Counting Sort**, a non-comparison sorting algorithm that sorts elements by counting the frequency of each value. This algorithm is highly efficient when the range of input values is relatively small compared to the number of elements.

---

## 📚 Topics Covered

* Introduction to Counting Sort
* Frequency Array (Count Array)
* Counting Element Occurrences
* Reconstructing the Sorted Array
* Time and Space Complexity Analysis
* Advantages and Limitations of Counting Sort

---

## 💻 Programs Implemented

### 1. `count_sort.cpp`

**Concepts Used:**

* Finding the maximum element
* Creating and using a count array
* Frequency counting
* Reconstructing the original array
* Vector operations
* Time complexity analysis

---

## ⚡ Complexity Analysis Practiced

| Operation                   | Complexity   |
| --------------------------- | ------------ |
| Finding Maximum Element     | O(n)         |
| Counting Frequencies        | O(n)         |
| Reconstructing Sorted Array | O(k)         |
| **Overall Time Complexity** | **O(n + k)** |
| **Space Complexity**        | **O(k)**     |

> **n** = Number of elements
> **k** = Range of input values (Maximum Element + 1)

---

## 🎯 Key Learnings

* Learned how Counting Sort differs from comparison-based sorting algorithms.
* Understood the concept of using a frequency array instead of repeated comparisons.
* Implemented the complete Counting Sort algorithm using vectors.
* Learned why Counting Sort performs efficiently when the input range is limited.
* Explored the algorithm's space-time tradeoff.
* Understood why the basic implementation works only for non-negative integers.
* Learned that Counting Sort is not suitable when the value range is significantly larger than the number of elements.

---

## ✅ Day Outcome

Successfully implemented **Counting Sort** from scratch and strengthened understanding of frequency-based sorting techniques, along with their practical advantages and limitations.