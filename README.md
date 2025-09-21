# 🎯 Object Detection C++ Exercises Collection

This repository contains multiple sets of **C++ exercises** designed to strengthen programming skills in the context of **object detection**.  
Each set covers different aspects of the C++ language — from function parameter passing to STL containers and lambda functions — all applied to bounding boxes, image segmentation, and object tracking tasks.

---
## 🔧 Future Plan

I will continue expanding this collection with additional C++ concepts. Planned topics for future include:

- **Object Detection, Tracking and Image Segmentation Simulation for a single class in C++.** 
- **CUTLASS for efficient GPU matrix-multiplication kernels in C++.**
- **Triton Inference Server concepts for deploying C++ inference pipelines.**
- **Templates for generic programming in object detection tasks.** 
- **Eigen C++ Template Library for advanced matrix and linear algebra operations.** 
- **Enums for managing object states and categories.** 

This is an ongoing process, and more exercises and code details will be added step by step in each file.** 

---

## 🔧 Prerequisites

- **C++ compiler supporting C++17 or later (g++, clang++, MSVC).** 
- **Basic knowledge of C++ syntax.** 
- **Familiarity with object detection terminology (Bounding boxes, IoU, mAP, Detections, Confidence score, Precision, Recall, F1-score, AP@50, AP@7).** 

---

## 📂 Exercise Sets in 4 Folders

### 1. C++ Function Parameters and Argument Passing 
This folder contains **20 C++ exercises** for learning object detection–related programming concepts using:  

Sections include:
* [Call by Value](Function%20Parameters%20and%20Argument%20Passing%20/1.%20Call%20by%20Value/)
* [Call by Reference](Function%20Parameters%20and%20Argument%20Passing%20/Call%20by%20Reference/)
* [Call by Pointer](Function%20Parameters%20and%20Argument%20Passing%20/Call%20by%20Pointer/)
* [Call by const Reference](Function%20Parameters%20and%20Argument%20Passing%20/Call%20by%20const%20Reference/) 

---

### 2. C++ Lambda 
This folder contains **30 lambda function exercises** applied to object detection tasks (e.g., bounding boxes, confidence scores, IOU calculations).  

Sections include:
- **Basic Lambdas** → thresholding, filtering, area checks.  
- **Lambdas with Parameters** → IOU, scaling, normalization.  
- **Passing Lambdas to Functions** → sorting, filtering, transformations.  
- **Lambdas in Loops** → logging, drawing, dynamic thresholds.  
- **Capture Clauses** → modifying counters, thresholds, and logging.  
- **Comparisons with Regular Functions** → reusability, performance, callbacks.  

---

### 3. C++ Pointer 
This folder contains **15 pointer-based C++ exercises** to build intuition on pointer usage in detection pipelines.

Sections include:
- **Creating Pointers** → pointing to detections and bounding boxes.  
- **Dereferencing Pointers** → accessing and printing object data.  
- **Modifying Pointer Values** → updating confidence, resizing boxes, swapping objects.  

---

### 4. C++ STL Containers
This folder contains **35 STL container and algorithm exercises** integrated with object detection tasks.  

Sections include:
- **Sequential Containers (Vector, List, Array)** → bounding box storage, tracking with `std::list`, resizing with `std::vector`.  
- **Associative Containers (Map, Set)** → counting objects, unique IDs, mapping IDs to properties.  
- **Container Adapters (Queue, Stack, Deque)** → FIFO detection processing, undo/redo stacks, priority dequeues.  
- **C++ Algorithms with Lambda Functions** → using `accumulate`, `copy`, `count`, `find`, `replace`, `reverse`, and `sort` with detection data.  

---

## ⚡ How to Compile and Run

Each exercise is a standalone `.cpp` file. You can compile and run any file with `g++`:

```bash
# Compile
g++ Exercise1.cpp -o Exercise1

# Run
./Exercise1
```

**Note:** For all the files compilation and execution steps are the same.  

		  Just replace the filename in the compile command with the file you want to run.


---

### 🤝 Contributing

- Fork this repo
- Add your own ONNX Runtime C++ examples
- Submit a PR 🚀
- If you find any bug in the code, please report to sudhirsilwal23@gmail.com

---

### 📜 License

MIT License © 2025 Sudhir Silwal
