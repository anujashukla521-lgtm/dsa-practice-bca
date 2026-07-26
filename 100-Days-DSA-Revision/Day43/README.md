# Day 43 - Subsequences using Recursion

## Topic
Recursion + String Subsequences

## What I Learned

Today I learned how to generate all possible subsequences of a string using recursion.

A subsequence is a sequence that can be obtained by deleting some or no characters from the original string while maintaining the relative order of characters.

Example:

Input:

abc


Output:

""
"a"
"b"
"c"
"ab"
"ac"
"bc"
"abc"


## Approach

For every character, we have two choices:

1. Include the current character
2. Exclude the current character

This creates a recursive decision tree.

Pattern:

            ""
          /    \
        a        ""
      /   \     /   \
    ab     a   b     ""

## Algorithm

1. Start from index 0.
2. At every index:
   - Add the current character and make a recursive call.
   - Remove the character and explore the other choice.
3. When index reaches the end of the string, store the generated subsequence.

## Key Concepts

- Recursive decision making
- Base cases
- Choosing and undoing choices
- Understanding recursion trees

## Complexity Analysis

For a string of length n:

Time Complexity:

O(2^n)


Space Complexity:

O(n)


(Recursion stack + current subsequence)

## Key Learning

The biggest learning today was understanding that recursion explores all possible choices by breaking a problem into smaller decisions.

This concept became the foundation for understanding backtracking.