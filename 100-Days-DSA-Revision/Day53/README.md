# Day 53 — Reverse Linked List

## 📌 Topics Covered

* Reversing a singly linked list using an iterative approach
* Reversing a singly linked list using a recursive approach
* Understanding pointer manipulation in linked lists
* Comparing iterative and recursive solutions

## 🧠 Key Concepts

### Iterative Approach

Uses three pointers:

* `prev` — stores the previous node
* `current` — points to the current node
* `next` — temporarily stores the next node

The links are reversed one node at a time until `current` becomes `None`.

### Recursive Approach

The function recursively reaches the last node and reverses the links while returning back through the recursive calls.

## ⏱️ Complexity

For both approaches:

* **Time Complexity:** `O(n)`
* **Space Complexity:**

  * Iterative: `O(1)`
  * Recursive: `O(n)` due to the recursion stack

## 📂 Files

* `reverse_linked_list_iterative.py`
* `reverse_linked_list_recursive.py`

## 🎯 Key Takeaway

Reversing a linked list is an important pointer-manipulation pattern. The iterative approach uses constant extra space, while the recursive approach demonstrates how recursion can be used to reverse links.

## 🚀 Progress

Day 53 of the 100-Day DSA Revision Series completed.
