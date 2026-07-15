# Day 33 – Sorting Interview Problems (Concept & Approach)

## 📌 Topic Covered

* Merge Overlapping Intervals (Sorting + Greedy)

## 🎯 Objective

Understand the approach behind one of the most common sorting interview problems by focusing on problem analysis, pattern recognition, and algorithm design instead of implementation.

## 🧠 Key Concepts Learned

* Why sorting intervals is the first step.
* How to identify overlapping intervals.
* Understanding the concept of the "current merged interval."
* Why only the last merged interval needs to be checked.
* The purpose of `answer.back()` in maintaining the current state.
* How greedy thinking simplifies interval merging.

## 💡 Core Idea

After sorting the intervals, compare each interval with the last merged interval. If they overlap, extend the ending point; otherwise, start a new merged interval.

## 📝 Algorithm

1. Sort the intervals by their starting value.
2. Traverse the intervals one by one.
3. If the current interval overlaps with the last merged interval, extend its ending point.
4. Otherwise, begin a new merged interval.
5. Continue until all intervals are processed.

## ⏱️ Time Complexity

* Sorting: **O(n log n)**
* Traversal: **O(n)**
* **Overall:** O(n log n)

## 💾 Space Complexity

* **O(n)**

## 📚 Key Learnings

* Learned a new interview pattern based on Sorting + Greedy.
* Improved understanding of choosing the right data structure and maintaining the correct state.
* Realized that problem-solving is more about identifying the right approach than writing syntax.
* Focused on understanding the reasoning behind the algorithm before implementation.

## 🚀 Progress Note

Today's focus was entirely on understanding the problem rather than rushing to complete the code. Time was spent analyzing the approach, discussing different ideas, and building confidence in the algorithm. The implementation will be completed in the next session after developing a solid understanding of the pattern.
