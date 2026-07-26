# Day 44 - Permutations using Backtracking

## Topic
Backtracking - Generating Permutations

## What I Learned

Today I learned how to generate all possible permutations of an array using backtracking.

A permutation is an arrangement of elements where the order matters.

Example:

Input:

[1,2,3]


Output:

[1,2,3]
[1,3,2]
[2,1,3]
[2,3,1]
[3,1,2]
[3,2,1]


## Difference Between Subsets and Permutations

### Subsets:
- Order does not matter.
- We process elements from left to right.
- Example:

[1,2] and [2,1] are the same subset.


### Permutations:
- Order matters.
- Every element can be placed at any position.
- Example:

[1,2] and [2,1] are different permutations.


## Approach

At every recursive step:

1. Choose an unused element.
2. Mark it as used.
3. Explore the next position recursively.
4. Undo the choice while returning back.

Backtracking Pattern:


Choose
|
Explore
|
Undo


## Algorithm

1. Maintain a `used` array to track selected elements.
2. Loop through all elements.
3. If an element is unused:
   - Add it to the current permutation.
   - Mark it as used.
   - Make a recursive call.
   - Remove it and mark it unused after returning.
4. When the current permutation size equals the input size, store it.

## Code Concepts

Used:
- Vector
- Recursion
- Backtracking
- State restoration

## Complexity Analysis

For n elements:

Time Complexity:

O(n × n!)


Space Complexity:

O(n)


(Auxiliary space excluding output)

## Key Learning

Today I understood the difference between recursion and backtracking.

The main idea of backtracking is:

"Make a choice, explore the possibility, and undo the choice so other possibilities can be explored."

The `used[]` array helps maintain the current state and prevents choosing the same element multiple times.