# Data Structures in C/C++  

**A collection of common data structures implemented in C/C++ for learning and reference.**  

## 📌 Overview  
This repository contains implementations of fundamental data structures in **C** and **C++**, along with explanations, usage examples, and performance analysis. Whether you're preparing for coding interviews, learning algorithms, or just refreshing your CS fundamentals, this repo is designed to help!  

---

## 📋 Table of Contents  
1. [**Data Structures Implemented**](#-data-structures-implemented)  
2. [**How to Use**](#-how-to-use)  
3. [**Contributing**](#-contributing)  
4. [**License**](#-license)  

---

## 🏗️ Data Structures Implemented  

### **Linear Data Structures**  
✅ **Array** – Static & Dynamic implementations  
✅ **Linked List** – Singly, Doubly, Circular  
✅ **Stack** (Array & Linked List implementations)  
✅ **Queue** (Array & Linked List implementations)  
✅ **Hash Table** (Chaining & Open Addressing)  

### **Non-Linear Data Structures**  
✅ **Trees**  
   - Binary Tree  
   - Binary Search Tree (BST)  
   - AVL Tree (Self-balancing BST)  
   - Heap (Min-Heap & Max-Heap)  
✅ **Graphs**  
   - Adjacency Matrix & List representations  
   - BFS & DFS traversals  
   - Dijkstra's Algorithm (Shortest Path)  

### **Advanced Structures**  
🔹 **Trie** (Prefix Tree)  
🔹 **Segment Tree** (Range Queries)  
🔹 **Disjoint Set (Union-Find)**  

*(More structures will be added over time!)*  

---

## 🚀 How to Use  

### **Cloning the Repository**  
```sh
git clone https://github.com/Murchoid/Data-Structures-implementation.git
cd data-structures-c-cpp
```

### **Compiling & Running**  
Each data structure is in its own directory with a `Makefile` (for C) or `CMakeLists.txt` (for C++).  

**Example (Compiling a C program):**  
```sh
cd linked-list/singly-linked-list
make
./singly_linked_list
```

**Example (Compiling a C++ program):**  
```sh
cd binary-search-tree
mkdir build && cd build
cmake ..
make
./bst_example
```

### **Running Tests**  
Some implementations include test cases (using frameworks like **Google Test** for C++ or **Check** for C).  

```sh
cd tests
make test
```

---

## 🤝 Contributing  
Contributions are welcome! If you want to:  
- **Add a new data structure**  
- **Improve an existing implementation**  
- **Fix a bug**  
- **Add better documentation**  

### **Steps to Contribute**  
1. **Fork** the repository.  
2. **Create a branch** (`git checkout -b new-feature`).  
3. **Commit changes** (`git commit -am 'Added XYZ data structure'`).  
4. **Push** (`git push origin new-feature`).  
5. **Open a Pull Request** with a clear description.  

*(See [CONTRIBUTING.md](CONTRIBUTING.md) for detailed guidelines.)*  

---

## 📜 License  
This project is licensed under the **MIT License** – see [LICENSE](LICENSE) for details.  

---

## 🙌 Acknowledgements  
- Inspired by classic CS books (*CLRS, Algorithm Design Manual*)  
- Special thanks to contributors & open-source community  

---

✨ **Happy Coding!** ✨  

---
