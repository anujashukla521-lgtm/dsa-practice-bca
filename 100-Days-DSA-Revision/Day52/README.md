# Day 52 - Linked List Insertion & Deletion 🚀

## 📌 Topic Covered
Today I learned how to modify linked lists by performing insertion and deletion operations.

The focus was on understanding how node connections change when adding or removing elements from a linked list.

---

## 🧠 Concepts Learned

### 1. Linked List Insertion

Implemented:

- Insert at Beginning
- Insert at End
- Insert at Specific Position

### Insert at Beginning
- Created a new node.
- Connected the new node to the current head.
- Updated the head to the new node.
- Time Complexity: **O(1)**

### Insert at End
- Traversed the list until the last node.
- Connected the last node with the new node.
- Handled empty linked list cases.
- Time Complexity: **O(n)**

### Insert at Position
- Traversed to the node before the required position.
- Updated links carefully:
  - New node points to the next node.
  - Previous node points to the new node.
- Handled invalid positions and edge cases.

---

## 🗑️ Linked List Deletion

Implemented:

- Delete from Beginning
- Delete from End
- Delete from Specific Position

### Delete at Beginning
- Moved head to the next node.
- Handled empty list condition.
- Time Complexity: **O(1)**

### Delete at End
- Traversed to the second-last node.
- Removed the connection with the last node.
- Handled single node linked list.
- Time Complexity: **O(n)**

### Delete at Position
- Traversed to the node before the target node.
- Removed the target node by updating links.
- Handled invalid positions.

---

## 🔑 Important Learnings

- `head` is the most important reference in a linked list.
- Insertion and deletion mainly depend on updating node connections.
- Always consider edge cases:
  - Empty linked list
  - Single node linked list
  - First position
  - Last position
  - Invalid positions
- Traversal requires careful handling of pointers/references.

---

## ⏱️ Time Complexity Summary

| Operation | Complexity |
|-----------|------------|
| Insert Beginning | O(1) |
| Insert End | O(n) |
| Insert Position | O(n) |
| Delete Beginning | O(1) |
| Delete End | O(n) |
| Delete Position | O(n) |

---

## 📝 Practice Implementations

Implemented using Python:

- Node class
- LinkedList class
- Menu-driven program structure
- Insertion operations
- Deletion operations

---

## 🚀 Key Takeaway

Today I learned how linked lists are dynamically modified using pointer/reference manipulation. Understanding how links change is the foundation for solving advanced linked list problems like reversal, cycle detection, and merging lists.

## 📅 Day 52 Completed ✅