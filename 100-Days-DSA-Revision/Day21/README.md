# Day 21 - Linear Search and Variations

## Overview

Day 21 of my **100-Day DSA Revision Series** focused on understanding Linear Search and its different variations.  
I practiced modifying the basic searching approach to solve different problems like counting occurrences and finding positions of elements.

The main goal was to strengthen searching fundamentals before moving towards optimized searching techniques.

---

## Topics Covered

- Linear Search
- Searching an element in an array
- Count occurrences of an element
- Finding first occurrence
- Finding last occurrence
- Handling element not found cases
- Returning index values
- Time and Space Complexity analysis

---

## Programs Implemented

### 1. Linear Search

**File Name:**
```
linear-search.cpp
```

**Concepts Used:**
- Array traversal
- Element comparison
- Returning index
- Handling missing elements

---

### 2. Count Occurrences

**File Name:**
```
count-occurrences.cpp
```

**Concepts Used:**
- Complete array traversal
- Counting matching elements
- Frequency calculation

---

### 3. First Occurrence

**File Name:**
```
first-occurrence.cpp
```

**Concepts Used:**
- Left-to-right traversal
- Returning the first matching index
- Early termination

---

### 4. Last Occurrence

**File Name:**
```
last-occurrence.cpp
```

**Concepts Used:**
- Updating answer while traversing
- Storing latest matching index
- Handling absent elements using `-1`

---

## Complexity Analysis Practiced

### Linear Search

Time Complexity:
```
Best Case: O(1)
Worst Case: O(n)
```

Space Complexity:
```
O(1)
```

### Count Occurrences

Time Complexity:
```
O(n)
```

Space Complexity:
```
O(1)
```

### First & Last Occurrence

Time Complexity:
```
O(n)
```

Space Complexity:
```
O(1)
```

---

## Key Learnings

- Linear Search checks elements sequentially until the target is found.
- Searching problems can be modified by changing what happens after finding an element.
- First occurrence returns immediately when the target is found.
- Last occurrence requires storing and updating the index throughout traversal.
- Count occurrences requires complete traversal instead of stopping early.
- Proper handling of edge cases like missing elements improves code reliability.

---

## Day Outcome

Completed Day 21 of the **100-Day DSA Revision Series**.

Strengthened the foundation of searching algorithms by implementing multiple variations of Linear Search and understanding how small logic changes solve different problems.

---

## Next Topic

Binary Search Basics 🚀
