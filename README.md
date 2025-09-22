#  C++ Exercises for Object Detection Concepts

This repository contains multiple sets of **C++ exercises** designed to strengthen programming skills in the context of **object detection**  metrics and components.  
Each set covers different aspects of the C++ language from function parameter passing to STL containers and lambda functions — all applied to bounding boxes, image segmentation, and object tracking components.

---

## Prerequisites

- **C++ compiler supporting C++17 or later (g++, clang++, MSVC).** 
- **Basic knowledge of C++ syntax.** 
- **Familiarity with object detection terminology (Bounding boxes, IoU, mAP, Detections, Confidence score, Precision, Recall, F1-score, AP@50, AP@7).** 

---

## Exercise Sets in 4 Folders

### 1. C++ Function Parameters and Argument Passing 
This folder contains **20 C++ exercises** for learning object detection related programming concepts and all exercises can be found under their respective directories.  

Sections include:
* [Call by Value](Function%20Parameters%20and%20Argument%20Passing/1.%20Call%20by%20Value)
* [Call by Reference](Function%20Parameters%20and%20Argument%20Passing/2.%20Call%20by%20Reference)
* [Call by Pointer](Function%20Parameters%20and%20Argument%20Passing/3.%20Call%20by%20Pointer)
* [Call by const Reference](Function%20Parameters%20and%20Argument%20Passing/4.%20Call%20by%20const%20Reference)

---

### 2. C++ Lambda 
This folder contains **30 lambda function exercises** applied to object detection tasks (e.g., bounding boxes, confidence scores, IOU calculations) and all exercises can be found under their respective directories.    


Sections include:
* [Basic Lambdas](Lambda/1.%20Basic_Lambda) → thresholding, filtering, area checks.
* [Lambdas with Parameters](Lambda/2.%20Lambda_With_Parameters) → IOU, scaling, normalization.
* [Passing Lambdas to Functions](Lambda/3.%20Passing_Lambdas_to_Functions) → sorting, filtering, transformations.
* [Lambdas in Loops](Lambda/4.%20Using_Lambdas_in_Loops) → logging, drawing, dynamic thresholds.
* [Capture Clauses](Lambda/5.%20Capture_Clause[]_and_Capture_by_Reference[&]) → modifying counters, thresholds, and logging.
* [Comparisons with Regular Functions](Lambda/6.%20Regular_Functions_vs_Lambda_Functions) → reusability, performance, callbacks.

---

### 3. C++ Pointer 
This folder contains **15 pointer-based C++ exercises** to build intuition on pointer usage in detection pipelines and all exercises can be found under their respective directories.  

Sections include:
* [Creating Pointers](Pointer/1.%20Creating%20Pointers) → pointing to detections and bounding boxes.
* [Dereferencing Pointers](Pointer/2.%20Dereferencing) → accessing and printing object data.
* [Modifying Pointer Values](Pointer/3.%20Modify%20the%20Pointer%20Value) → updating confidence, resizing boxes, swapping objects.
---

### 4. C++ STL Containers
This folder contains **35 STL container and algorithm exercises** integrated with object detection tasks and all exercises can be found under their respective directories.    

Sections include:
* [Sequential Containers (Vector, List, Array)](STL/1.%20Sequential%20Containers%20(Vector,%20List,%20Array)) → bounding box storage, `std::list`, `std::vector`.
* [Associative Containers (Map, Set)](STL/2.%20Associative%20Containers%20(Map,%20Set)) → counting objects, unique IDs, mapping IDs to properties.
* [Container Adapters (Queue, Stack, Deque)](STL/3.%20Container%20Adapters%20(Queue,%20Stack,%20Deque)) → FIFO detection processing, undo/redo stacks, priority dequeues.
* [C++ Algorithms with Lambda Functions](STL/4.%20STL%20Lambda%20and%20Standard%20Algorithms) → using `accumulate`, `copy`, `count`, `find`, `replace`, `reverse`, and `sort` with detection data.

---

## How to Compile and Run

Each exercise is a standalone `.cpp` file. You can compile and run any file with `g++`:

```bash
# Compile
g++ Exercise1.cpp -o Exercise1

# Run
./Exercise1
```

**Note:** For all the files compilation and execution steps are the same.  

Just replace the c++ source code filename(Exercise1.cpp) in the compile command with the file you want to run.
-o Exercise1: This is an option flag that tells the compiler to name the output executable file Exercise1. Running the Executable ./Exercise1.

---

## Future Plan

I will continue expanding this collection with additional C++ concepts. Planned topics for future include:

- **Object Detection, Tracking and Image Segmentation Simulation for a single class in C++.** 
- **CUTLASS for efficient GPU matrix-multiplication kernels in C++.**
- **Triton Inference Server concepts for deploying C++ inference pipelines.**
- **Templates for generic programming in object detection tasks.** 
- **Eigen C++ Template Library for advanced matrix and linear algebra operations.** 
- **Enums for managing object states and categories.** 

This is an ongoing process, and more exercises and code details will be added step by step in each file.** 

---

### 🤝 Contributing

- Fork this repo
- If you find any bug in the code, please report to sudhirsilwal23@gmail.com

---

### 📜 License

Apache License 2.0 © 2025 Sudhir Silwal

This project is licensed under the Apache License, Version 2.0 - see the [LICENSE](LICENSE) file for details.
