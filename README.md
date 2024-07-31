# 42 Network - CPP Modules

Welcome to the repository for the CPP modules of 42 Network. Here you'll find an overview of each module from CPP00 to CPP04, each designed to strengthen your skills in C++ and object-oriented programming.

## Table of Contents

1. [CPP00](#cpp00)
2. [CPP01](#cpp01)
3. [CPP02](#cpp02)
4. [CPP03](#cpp03)
5. [CPP04](#cpp04)

## CPP00

### Objective
Introduce the basic concepts of C++ and object-oriented programming.

### Content
- Basic C++ syntax
- Variables and data types
- Functions
- Control flow structures (if, for, while)
- Introduction to classes and objects

### Exercises
- Implementation of basic functions
- Creation of a simple class
- Handling input and output

## CPP01

### Objective
Deepen into object-oriented programming and memory management.

### Content
- Constructors and destructors
- Function overloading
- Operator overloading
- Pointers and references
- Dynamic memory management
- Heap and Stak

### Exercises
- Creating classes with constructors and destructors
- Implementing operator overloading
- Using pointers and references in functions and classes

#### Ex 00
- Stack: It is a memory area where local variables are automatically stored and managed. When the function in which these variables are declared terminates, the memory is automatically freed.

- Heap: It is an area of memory where objects can be dynamically allocated using new and manually released using delete. The objects in the heap remain in memory until they are explicitly freed, regardless of the scope of the functions.

When to Use Stack vs Heap
Use stack when:

- You only need the object to exist for the lifetime of the function in which it was created.
You want memory to be handled automatically (you don't care about delete).
You want to take advantage of the efficiency of the stack (operations on the stack are usually faster than on the heap).
Use the heap when:

- You need the object to persist after the function in which it was created has finished.
The size of the object is too large or you don't know the size during compilation.
You are creating a dynamic number of objects (for example, in a loop where you don't know how many objects will be needed).


## CPP02

### Objective
Introduce advanced class concepts and more complex programming techniques.

### Content
- Inheritance and polymorphism
- Abstract classes and interfaces
- Virtual functions and virtual function overloading
- Exception handling

### Exercises
- Implementing inheritance and polymorphism in classes
- Creating abstract classes and interfaces
- Handling exceptions in programs

## CPP03

### Objective
Explore advanced object-oriented programming and templates.

### Content
- Function and class templates
- Iterators and algorithms from the STL (Standard Template Library)
- STL containers
- Good object-oriented design practices

### Exercises
- Creating function and class templates
- Using STL containers and algorithms
- Implementing basic design patterns

## CPP04

### Objective
Integrate knowledge acquired in previous modules to develop more complex and efficient applications.

### Content
- Metaprogramming and advanced template techniques
- Advanced use of the STL
- Code optimization and efficient resource management
- Multithreading and concurrency programming

### Exercises
- Developing applications that combine multiple advanced techniques
- Implementing efficient algorithms using the STL
- Using concurrency techniques to improve performance

## Contributions

If you wish to contribute to this repository, please follow these steps:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature/new-feature`).
3. Make your changes and commit them (`git commit -m 'Add new feature'`).
4. Push your branch (`git push origin feature/new-feature`).
5. Open a Pull Request.



Thank you for your interest in the CPP modules of 42 Network and happy coding!

----

**42 Network**
