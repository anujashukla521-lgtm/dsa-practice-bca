# Day 41 - Backtracking Basics

## 📌 Topic Covered
- Introduction to Backtracking
- Decision Tree Approach
- Take / Not Take Recursion
- Subset Sum Problem

## 💻 Problem Solved
### 1. Subset Sum
Generate the sum of all possible subsets of an array using recursion.

### Approach
- At every index, there are two choices:
  - Include the current element.
  - Exclude the current element.
- Explore both choices recursively.
- Store the sum when all elements have been processed.
- Sort the resulting subset sums before displaying them.

## 🧠 Key Learnings
- Understood the difference between recursion and backtracking.
- Learned that backtracking follows the pattern:
  - Choose
  - Explore
  - Undo (Restore Previous State)
- Built the recursion decision tree for subset generation.
- Realized that Subset Sum uses recursive exploration, while explicit backtracking appears when restoring a modified state (e.g., `push_back()` and `pop_back()`).

## ⏱️ Time Complexity
- **Time:** O(2^n)
- **Auxiliary Space:** O(n)
- **Output Space:** O(2^n)

## 🚀 Next Goals
- Generate All Subsequences
- Generate All Subsets
- Combination Sum
- Permutations