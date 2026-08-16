# Day 54 — Slow and Fast Pointer Technique

## 📌 Topics Covered

* Finding the middle node of a singly linked list
* Detecting a cycle in a singly linked list
* Slow and fast pointer technique
* Floyd's Tortoise and Hare algorithm

## 🧠 Problems Solved

### 1. Find Middle Node

Used two pointers:

* `slow` moves one node at a time
* `fast` moves two nodes at a time

When `fast` reaches the end, `slow` points to the middle node.

Example:

`5 → 11 → 9 → 2 → None`

Middle node:

`9`

### 2. Cycle Detection

Used the same slow and fast pointer technique.

* `slow` moves one step
* `fast` moves two steps
* If `slow == fast`, a cycle exists
* If `fast` reaches `None`, there is no cycle

This is known as **Floyd's Cycle Detection Algorithm**.

## ⏱️ Complexity

### Find Middle Node

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

### Cycle Detection

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

## 🎯 Key Takeaway

The **slow and fast pointer pattern** can solve multiple linked-list problems.

The important pattern is:

`slow → 1 step`

`fast → 2 steps`

It can be used for finding the middle node, detecting cycles, and solving other linked-list problems.

## 📂 Files

* `find-middle-node.py`
* `cycle-detection.py`

## 🚀 Progress

Day 54 of the 100-Day DSA Revision Series completed.
