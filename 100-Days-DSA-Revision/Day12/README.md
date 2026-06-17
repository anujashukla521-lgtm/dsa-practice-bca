# Day 12 - String Patterns

## Overview

Day 12 of my 100-Day DSA Revision Series focused on String Patterns. The goal was to strengthen problem-solving skills using Hash Maps, Two Pointers, and Sliding Window techniques. These patterns are frequently used in coding interviews and help optimize string-related problems.

---

## Topics Covered

* Frequency Counting using Hash Maps
* Two Pointer Technique
* Sliding Window Pattern
* Character Frequency Tracking
* Duplicate Detection in Strings
* Longest Unique Substring Problems
* String Traversal and Optimization

---

## Programs Implemented

### 1. First Non-Repeating Character

**File:** `first_non_repeating_character.cpp`

**Concepts Used:**

* Hash Map (`unordered_map`)
* Frequency Counting
* Two-Pass Traversal

**Approach:**

* Count frequency of each character.
* Traverse the string again.
* Print the first character whose frequency is 1.

**Time Complexity:** O(n)
**Space Complexity:** O(k)

---

### 2. Remove Duplicate Characters

**File:** `remove_duplicate_characters.cpp`

**Concepts Used:**

* Hash Map
* String Construction
* Duplicate Tracking

**Approach:**

* Traverse the string.
* Store characters that appear for the first time.
* Skip repeated characters while maintaining original order.

**Time Complexity:** O(n)
**Space Complexity:** O(k)

---

### 3. Longest Substring Without Repeating Characters

**File:** `longest_substring_without_repeating.cpp`

**Concepts Used:**

* Sliding Window
* Two Pointers
* Hash Map

**Approach:**

* Expand the window using the right pointer.
* Track character frequencies.
* Shrink the window from the left when duplicates appear.
* Maintain the maximum valid window length.

**Time Complexity:** O(n)
**Space Complexity:** O(k)

---

## Complexity Analysis Practiced

| Problem                                        | Time Complexity | Space Complexity |
| ---------------------------------------------- | --------------- | ---------------- |
| First Non-Repeating Character                  | O(n)            | O(k)             |
| Remove Duplicate Characters                    | O(n)            | O(k)             |
| Longest Substring Without Repeating Characters | O(n)            | O(k)             |

Where:

* **n** = Length of string
* **k** = Number of unique characters

---

## Key Learnings

* Learned how Hash Maps simplify frequency-based string problems.
* Practiced identifying duplicates efficiently.
* Understood how the Sliding Window technique avoids unnecessary repeated work.
* Improved understanding of maintaining a valid window using two pointers.
* Realized that understanding the pattern is more important than memorizing code.

---

## Day Outcome

Successfully practiced multiple string pattern problems and strengthened understanding of Hash Maps, Two Pointers, and Sliding Window techniques.

A major takeaway from today was learning how interview problems often become easier once the correct pattern is identified. The focus was on understanding the logic, debugging mistakes, and improving problem-solving skills through consistent practice.
