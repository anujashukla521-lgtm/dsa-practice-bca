# Day 47 - Sudoku Solver 🧩

## 📌 Topic
Backtracking - Sudoku Solver

## 📖 Problem Statement

Given a partially filled 9x9 Sudoku board, solve the Sudoku puzzle by filling the empty cells.

A valid Sudoku solution must satisfy:

- Each row contains digits `1-9` without repetition.
- Each column contains digits `1-9` without repetition.
- Each 3x3 sub-grid contains digits `1-9` without repetition.

## 💡 Approach Used

This problem is solved using **Backtracking**.

### Algorithm:

1. Find an empty cell (`.`) in the Sudoku board.
2. Try placing digits from `1` to `9`.
3. Check whether the digit placement is valid:
   - Check the row.
   - Check the column.
   - Check the corresponding 3x3 box.
4. If valid:
   - Place the digit.
   - Recursively solve the remaining board.
5. If the solution fails:
   - Undo the choice (backtrack).
   - Try the next digit.
6. If no empty cells remain, the Sudoku is solved.

## 🔄 Backtracking Pattern


Choose → Explore → Undo

Choose:
Place a possible number

Explore:
Recursively solve the remaining board

Undo:
Remove the number if it leads to an invalid solution


## 🧠 Concepts Learned

- Recursive backtracking
- Constraint checking
- Decision making in recursion
- State restoration
- 2D matrix traversal

## ⏱️ Complexity Analysis

### Time Complexity:

O(9^(N*N))

In the worst case, every empty cell can have 9 possible choices.

### Space Complexity:

O(N*N)

Due to recursion stack and board storage.

## 📝 Key Learning

Sudoku Solver is one of the classic backtracking problems where recursion explores all possible choices and backtracks whenever a choice violates constraints.

## 📂 File Structure


Day-47-Sudoku-Solver/
│
└── sudoku_solver.cpp


## 🚀 Progress

Completed Day 47 of my **100 Days DSA Revision Journey**.

Previous Topics:
- Recursion
- Subsets
- Subsequences
- Permutations
- Combination Sum
- N Queens

Next: More advanced Backtracking problems.