# C++ Module 08 Overview

## Introduction

C++ Module 08 focuses on **advanced features** in C++, covering **algorithms**, **iterators**, and **templated containers**. It builds on generic programming concepts and introduces the use of algorithms from the Standard Template Library (STL) in more complex scenarios. You'll learn to combine templates with iterators and algorithms to create highly reusable and flexible code.

This module emphasizes on:
- Advanced use of **templates**.
- Understanding and implementing **iterators**.
- Extending existing C++ containers to support iterators.
- Applying **algorithms** to custom containers and data structures.


## Compilation

```
make
```
Or, if there is no Makefile:
```
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```
Run the program:
```
./exec_name(check Makefile)

```

## Topics Covered

### 1. **Introduction to Algorithms and Iterators with Templates**
   - **Algorithms**: Learn how to use and implement algorithms with templates for different data types.
   - **Iterators**: Understand the role of iterators in traversing containers and working with data.
   - **Making `std::stack` Iterable**: Extend `std::stack` to support iteration by accessing its underlying container and providing iterator functionality.

### 2. **Further Use of Algorithms and Iterators with Classes**
   - **Iterator Implementation**: Implement iterators for custom containers.
   - **Using STL Algorithms with Custom Containers**: Leverage STL algorithms for custom classes that support iterators.

### 3. **Making `std::stack` Iterable**
   - **Modifying `std::stack`**: Learn how to modify `std::stack` to expose iterators and allow element iteration.
   - **Iterator Support**: Provide `begin()` and `end()` methods to enable iteration over stack elements.

### 4. **Complexity Considerations**
   - **Time Complexity of Algorithms**: Analyze the performance of algorithms when used with iterators and templates.
   - **Optimization**: Discuss strategies for optimizing the use of algorithms and iterators in templated code.

### 5. **Type Traits and SFINAE**
   - **Type Traits**: Understand how to use type traits and conditional compilation with `std::enable_if` to enable or disable templates based on type properties.
   - **SFINAE (Substitution Failure Is Not An Error)**: Learn how to use SFINAE to handle template specialization in C++.

### 6. **STL Algorithms**
   - **Common STL Algorithms**: Use algorithms like `std::sort()`, `std::find()`, and `std::accumulate()` on containers.
   - **Algorithm Optimization**: Discuss ways to optimize algorithms and improve performance when dealing with large datasets or custom containers.

## Usage

After compiling your program, you can run it to explore advanced C++ features such as:
- **Templates**: Learn to write code that can work with different data types using function templates and class templates.
- **Iterators**: Understand how to traverse and manipulate data in containers like stacks and lists.
- **STL Algorithms**: Apply built-in algorithms to your custom containers to perform operations like sorting, searching, and accumulating values.
