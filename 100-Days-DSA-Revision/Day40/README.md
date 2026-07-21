# Day 40 - Recursion Applications

## 📌 Topics Covered

- Decimal to Binary using Recursion
- Binary Search using Recursion

---

## 🎯 Purpose

The purpose of Day 40 was to strengthen recursion by implementing practical problems that require recursive thinking.

The focus was on:
- Reducing a problem into smaller subproblems
- Understanding recursive call flow
- Choosing appropriate base cases
- Applying recursion to searching and number conversion

---

## 💻 Problems Implemented

### 1. Decimal to Binary using Recursion

Implemented a recursive solution to convert a decimal number into its binary representation.

**Concepts Practiced**
- Recursive division by 2
- Printing during the return phase of recursion
- Base case handling

---

### 2. Binary Search using Recursion

Implemented Binary Search recursively on a sorted array.

**Concepts Practiced**
- Divide and Conquer
- Recursive searching
- Mid-point calculation
- Base condition (`low > high`)

---

## 🛠️ Technologies Used

- Language: C++
- Concepts: Recursion, Divide and Conquer, Arrays

---

## 📂 File Structure

```
Day40/
│
├── decimal_to_binary.cpp
└── binary_search_using_recursion.cpp
```

---

## 🧠 Key Learnings

- Recursive functions must reduce the problem size in every call.
- Base cases are essential to prevent infinite recursion.
- Binary Search naturally fits the recursive approach by eliminating half of the search space in each call.
- Decimal to Binary demonstrates how recursion can process data while returning from recursive calls.

---

## 📈 Time Complexity

| Problem | Time | Space |
|---------|------|-------|
| Decimal to Binary | O(log n) | O(log n) |
| Binary Search | O(log n) | O(log n) |

---

## 🚀 Next Steps

- Tower of Hanoi
- Josephus Problem
- Backtracking Basics