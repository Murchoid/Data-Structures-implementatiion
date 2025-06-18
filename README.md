📄 Updated README.md
markdown
Copy
Edit
# 📘 Data Structures in C

A complete, well-organized and documented collection of core and advanced data structures implemented in **C**, for both learning and interview preparation.

---

## 📦 Structure

Each data structure is implemented in its own folder with:

- `*.c` – Implementation file
- `*.h` – Header with declarations and structs
- `main.c` – Example/demo usage
- `README.md` – Description, operations, time/space complexities
- `CMakeLists.txt` – Optional build file (per folder)

---

## 📋 Table of Contents

1. [Implemented Structures](#-implemented-structures)
2. [Usage Guide](#-usage-guide)
3. [Build Instructions](#-build-instructions)
4. [Testing](#-testing)
5. [Contributing](#-contributing)
6. [License](#-license)

---

## 🏗️ Implemented Structures

### 🔹 Linear
- Arrays (static/dynamic)
- Singly Linked List
- Doubly Linked List
- Circular Linked List
- Stack (Array & Linked List)
- Queue (Array & Linked List)
- Deque (Double-Ended Queue)

### 🔹 Hashing
- Hash Tables (Chaining & Open Addressing)
- Set & Map via hashing

### 🔹 Trees
- Binary Tree
- Binary Search Tree
- AVL Tree
- Red-Black Tree
- Segment Tree
- B-Tree (Optional)
- Trie

### 🔹 Heaps
- Min Heap
- Max Heap
- Priority Queue (with Heap)

### 🔹 Graphs
- Adjacency List / Matrix
- BFS & DFS
- Dijkstra’s Algorithm
- Kruskal’s / Prim’s (MST)

### 🔹 Advanced
- Disjoint Set (Union-Find)
- Skip List
- K-D Tree
- Fenwick Tree (Binary Indexed Tree)
- Sparse Table

---

## 🚀 How to Use

### Clone the repo:
```sh
git clone https://github.com/Murchoid/data-structures-c.git
cd data-structures-c
Compile and run (using Make or CMake):
sh
Copy
Edit
cd singly_linked_list
make
./singly_linked_list
OR

sh
Copy
Edit
mkdir build && cd build
cmake ..
make
✅ Testing
Some folders include unit tests (using Check for C):

sh
Copy
Edit
cd tests
make test
🤝 Contributing
We welcome contributions:

New data structures

Edge case handling

Code clean-up

Documentation

Please follow our CONTRIBUTING.md for more.

📜 License
Licensed under the MIT License. See LICENSE.

🙌 Acknowledgments
Inspired by CLRS and university-level DSA courses.

Big thanks to contributors and the open-source community.

✨ Happy Coding and Learning! ✨
