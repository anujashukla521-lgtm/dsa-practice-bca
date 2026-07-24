# Day 42 - Backtracking: Generate Subsets & Subsets II

## 📌 Topics Covered

- Backtracking Basics
- Generate All Subsets (Power Set)
- Subsets II (Handling Duplicates)

---

## 📝 Problems Solved

### 1. Generate Subsets

Generate all possible subsets of a given array using recursion and backtracking.

Example:

Input:
[1,2,3]

Output:
[
[],
[1],
[2],
[3],
[1,2],
[1,3],
[2,3],
[1,2,3]
]

---

### 2. Subsets II

Generate all **unique** subsets from an array that may contain duplicate elements.

Example:

Input:
[1,2,2]

Output:
[
[],
[1],
[2],
[1,2],
[2,2],
[1,2,2]
]

---

## 🚀 Approach

### Generate Subsets

- At each index, make two choices:
  - Include the current element.
  - Exclude the current element.
- Use recursion to explore both possibilities.
- Backtrack by removing the last chosen element.

### Subsets II

- Sort the array.
- Store the current subset at every recursive call.
- Iterate from the current index.
- Skip duplicate elements at the same recursion level.
- Choose → Explore → Undo (Backtrack).

---

## 🧠 Key Learnings

- Understanding recursion trees.
- Difference between recursion and backtracking.
- Choose → Explore → Undo pattern.
- Binary-choice backtracking (Subsets).
- For-loop based backtracking (Subsets II).
- Handling duplicates using sorting and skipping repeated elements.
- Importance of recursion levels while avoiding duplicate subsets.

---

## ⏱ Complexity

### Generate Subsets

- Time: **O(n × 2ⁿ)**
- Space: **O(n)** (excluding output)

### Subsets II

- Time: **O(n × 2ⁿ)**
- Space: **O(n)** (excluding output)

---

## 📂 File Structure

```
Day42/
│
├── generate_subsets.cpp
├── subsets_ii.cpp
└── README.md
```

---

## 🎯 Milestone

This day marked my introduction to backtracking through subset generation and extended the concept to handle duplicate elements using **Subsets II**.