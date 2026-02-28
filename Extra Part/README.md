# 📚 C++ STL Walkthrough

### Author: Vanshaj P Mohan

Complete Hands-on Understanding of Standard Template Library (STL)

------------------------------------------------------------------------

## 🚀 Overview

This repository contains my complete walkthrough of the **C++ Standard
Template Library (STL)**.\
The goal of this practice was to build a strong foundation for:

-   Data Structures & Algorithms\
-   Competitive Programming\
-   Technical Interviews\
-   Efficient C++ coding

------------------------------------------------------------------------

# 📦 What is STL?

The **Standard Template Library (STL)** provides:

1.  Containers → Data structures\
2.  Algorithms → Predefined functions\
3.  Iterators → Traversal mechanism\
4.  Utility Classes → Like `pair`

------------------------------------------------------------------------

# 🧱 1. Sequential Containers

These store data in linear order.

------------------------------------------------------------------------

## 🔹 1. Vector

Dynamic array that resizes automatically.

### Concepts Practiced:

-   `push_back()`
-   `pop_back()`
-   `size()`
-   `capacity()`
-   `front()`
-   `back()`
-   `at()`
-   `clear()`
-   `empty()`
-   Iteration (normal loop, range-based loop, iterators)

### Key Understanding:

-   Stored in contiguous memory
-   Fast random access
-   Amortized O(1) insertion at end

------------------------------------------------------------------------

## 🔹 2. Vector with Auto

Used `auto` keyword in:

``` cpp
for(auto val : v)
```

### Why Important?

-   Cleaner syntax
-   Avoids type verbosity
-   Useful in templates and iterators

------------------------------------------------------------------------

## 🔹 3. Vector with Iterators

Used:

``` cpp
vector<int>::iterator it;
```

### Learned:

-   `begin()`
-   `end()`
-   Iterators behave like pointers
-   Required for STL algorithms

------------------------------------------------------------------------

## 🔹 4. Deque

Double Ended Queue.

### Functions:

-   `push_front()`
-   `push_back()`
-   `pop_front()`
-   `pop_back()`

### Difference from Vector:

-   Fast insertion at both ends
-   Not strictly contiguous like vector

------------------------------------------------------------------------

## 🔹 5. List

Doubly Linked List.

### Functions:

-   `push_back()`
-   `push_front()`
-   `pop_back()`
-   `pop_front()`
-   `remove()`

### Important:

-   No random access
-   Insert/delete is O(1)
-   Access is O(n)

------------------------------------------------------------------------

## 🔹 6. Pair

Stores two values together.

``` cpp
pair<int, string> p;
```

Access: - `p.first` - `p.second`

Used heavily in: - Maps - Returning multiple values

------------------------------------------------------------------------

# 🧩 2. Associative Containers

These store elements based on keys.

------------------------------------------------------------------------

## 🔹 1. Set

-   Stores unique elements
-   Sorted automatically

### Functions:

-   `insert()`
-   `erase()`
-   `find()`
-   `count()`
-   `lower_bound()`
-   `upper_bound()`

### Time Complexity:

O(log n)

------------------------------------------------------------------------

## 🔹 2. Map

Stores key-value pairs.

``` cpp
map<string, int> m;
```

### Properties:

-   Unique keys
-   Sorted by key

### Operations:

-   `m[key] = value`
-   `insert()`
-   `find()`
-   `erase()`

Time Complexity: O(log n)

------------------------------------------------------------------------

## 🔹 3. Multimap

-   Allows duplicate keys
-   Sorted order maintained

Useful when: - Same key maps to multiple records

------------------------------------------------------------------------

## 🔹 4. Unordered Map

Hash-table based map.

### Properties:

-   Not sorted
-   Average O(1)

Best when: - Order doesn't matter - Faster lookup needed

------------------------------------------------------------------------

# 📚 3. Container Adaptors

------------------------------------------------------------------------

## 🔹 1. Stack (LIFO)

Functions: - `push()` - `pop()` - `top()` - `empty()`

Used in: - Expression evaluation - Recursion simulation

------------------------------------------------------------------------

## 🔹 2. Queue (FIFO)

Functions: - `push()` - `pop()` - `front()` - `back()`

Used in: - BFS - Scheduling

------------------------------------------------------------------------

## 🔹 3. Priority Queue (Heap)

By default: **Max Heap**

Functions: - `push()` - `pop()` - `top()`

Time Complexity: O(log n)

Used in: - Dijkstra - Greedy algorithms - Top-K problems

------------------------------------------------------------------------

# ⚙️ 4. Algorithms Practiced

------------------------------------------------------------------------

## 🔹 1. sort()

``` cpp
sort(v.begin(), v.end());
```

-   Uses Introsort
-   Time Complexity: O(n log n)

------------------------------------------------------------------------

## 🔹 2. reverse()

``` cpp
reverse(v.begin(), v.end());
```

------------------------------------------------------------------------

## 🔹 3. next_permutation()

``` cpp
next_permutation(v.begin(), v.end());
```

-   Generates next lexicographical permutation
-   Useful in combinatorics

------------------------------------------------------------------------

# 📊 STL Time Complexity Comparison Table

  Container        Access   Insert     Delete     Search
  ---------------- -------- ---------- ---------- ----------
  Vector           O(1)     O(1)\*     O(n)       O(n)
  Deque            O(1)     O(1)       O(1)       O(n)
  List             O(n)     O(1)       O(1)       O(n)
  Set              ---      O(log n)   O(log n)   O(log n)
  Map              ---      O(log n)   O(log n)   O(log n)
  Unordered Map    ---      O(1)\*\*   O(1)\*\*   O(1)\*\*
  Priority Queue   ---      O(log n)   O(log n)   ---

\*Amortized\
\*\*Average case

------------------------------------------------------------------------

# 🧠 STL Quick Cheat Sheet

### Include Headers

``` cpp
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <list>
#include <deque>
#include <algorithm>
```

------------------------------------------------------------------------

### Common Patterns

``` cpp
// Traverse vector
for(auto val : v)

// Iterator
for(auto it = v.begin(); it != v.end(); it++)

// Sort
sort(v.begin(), v.end());

// Reverse
reverse(v.begin(), v.end());
```

------------------------------------------------------------------------

# 🎯 Key Learning Outcomes

✔ Clear understanding of sequential vs associative containers\
✔ Practical use of iterators\
✔ Strong grip on STL algorithms\
✔ Time complexity awareness\
✔ Correct container selection based on problem

------------------------------------------------------------------------

# 💡 Interview Readiness Impact

After this STL walkthrough, you are now ready to:

-   Solve LeetCode medium problems efficiently\
-   Handle map/set based questions confidently\
-   Use priority queue in graph problems\
-   Optimize solutions using correct STL container

------------------------------------------------------------------------

# 🏁 Conclusion

This STL walkthrough builds a **strong core foundation** for:

-   DSA Mastery\
-   Competitive Programming\
-   Technical Interviews\
-   High-performance C++ coding

------------------------------------------------------------------------
