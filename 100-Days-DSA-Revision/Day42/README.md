# Day 42 - Generate All Subsets using Backtracking

## 📌 Topic
Backtracking - Subset Generation

## 📝 Problem
Generate all possible subsets of a given array.

Example:

Input:
[1,2,3]

Output:
8 possible subsets

## 🚀 Approach

Used recursion and backtracking.

At every index, we have two choices:

1. Include the current element
2. Exclude the current element

The recursion explores both choices and stores every valid subset.

## 🧠 Algorithm

1. Start from index 0.
2. Add current element.
3. Recurse for next index.
4. Remove element (backtrack).
5. Skip current element.
6. Store subset when index reaches array size.

## ⏱ Complexity

Time Complexity:
O(n * 2^n)

Space Complexity:
O(n)

## 🎯 Key Learnings

- Introduction to backtracking
- Understanding recursion decision trees
- Choose, Explore, Undo pattern
- Generating power sets

## 🔮 Next Improvements

- Solve Subsets II (handling duplicates)
- Practice permutation problems
- Explore combination problems