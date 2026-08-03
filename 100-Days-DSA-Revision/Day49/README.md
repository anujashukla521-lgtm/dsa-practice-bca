# 🚀 Day 49: Rat in a Maze | Backtracking

## 📌 Topic: Rat in a Maze Problem

Today I learned and implemented the **Rat in a Maze** problem using the **Backtracking** technique.

This problem helped me understand how recursion can be used to explore multiple possible paths and how we can undo choices when a path does not lead to the solution.

---

# 🧠 Concept Learned

The goal is to find all possible paths for a rat to move from the starting position `(0,0)` to the destination `(N-1,N-1)` in a maze.

The rat can move only:
- Inside the maze boundaries
- Through cells containing `1`
- Without visiting the same cell again

---

# 🔑 Backtracking Approach

Backtracking follows this pattern:

```
Choose a Path
      ↓
Move Forward
      ↓
Explore Solution
      ↓
Undo Choice
      ↓
Try Another Path
```

The algorithm explores every possible direction and returns back whenever a path becomes invalid.

---

# ⚙️ Algorithm

1. Start from the first cell `(0,0)`.
2. Mark the current cell as visited.
3. Try all possible directions:
   - Down
   - Left
   - Right
   - Up
4. Move recursively to the next valid cell.
5. If the destination is reached, store the path.
6. Backtrack by unmarking the visited cell.

---

# 💻 Implementation Concepts

## 1. Recursion

Recursion is used to explore different paths from the current position.

---

## 2. Visited Matrix

A visited matrix is maintained to avoid visiting the same cell multiple times and creating infinite loops.

Example:

```
1 0 0
1 1 0
0 1 1
```

`1` represents visited cells.

---

## 3. Direction Arrays

Direction arrays simplify movement in the maze.

```cpp
int di[] = {1, 0, 0, -1};
int dj[] = {0, -1, 1, 0};
```

These represent:

```
Down
Left
Right
Up
```

---

# ⏱ Complexity Analysis

## Time Complexity

```
O(4^(N*N))
```

In the worst case, every cell can have four possible choices.

## Space Complexity

```
O(N*N)
```

For visited matrix and recursion stack.

---

# 🧩 Pattern Recognition

This problem belongs to the **Backtracking Pattern**.

```
Backtracking

      ↓

Make a Choice

      ↓

Explore

      ↓

Undo Choice

      ↓

Try Another Choice
```

Similar problems:

- N Queens
- Sudoku Solver
- Word Search
- Palindrome Partitioning

---

# 💡 Key Learnings

- Understood how recursion can explore multiple paths.
- Learned the importance of maintaining state using a visited matrix.
- Understood the choose → explore → undo pattern of backtracking.
- Learned how grid-based problems can be solved using recursion.

---

# 🔥 Progress

## 100 Days DSA Revision Journey

**Day 49/100 ✅**