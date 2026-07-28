# Day 46 - N Queens Problem ♟️

## Topic
Backtracking - N Queens Problem

## Overview
Today I practiced solving the classic **N-Queens Problem** using the backtracking approach.

The goal of the problem is to place **N queens on an N×N chessboard** such that no two queens can attack each other.

A queen can attack another queen if they are placed in the same:
- Row
- Column
- Diagonal

## Concepts Learned

- Backtracking approach
- Decision making and undoing choices
- Recursive exploration
- Checking valid placements
- Optimizing backtracking solutions

## Approach

1. Place a queen row by row.
2. Before placing a queen, check whether the position is safe.
3. If the position is valid:
   - Place the queen.
   - Move to the next row.
4. If no solution is possible:
   - Backtrack.
   - Remove the previously placed queen.
   - Try another position.


## Complexity Analysis

### Time Complexity:
O(N!)

### Space Complexity:
O(N²)

(For storing the chessboard and recursion stack)

## Key Takeaway

The N-Queens problem helped me understand how backtracking explores multiple possibilities by following the:

**Choose → Explore → Undo**

pattern.

## Practice Status

✅ N-Queens problem implemented  
✅ Backtracking logic understood  
✅ Valid placement checking practiced  

More backtracking problems will be added in upcoming days.