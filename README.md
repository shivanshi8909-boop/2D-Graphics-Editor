# 2D Graphics Editor in C

## Project Description

This project is a menu-driven 2D Graphics Editor developed in C using a 2D character array. The editor allows users to create and manage simple graphical objects on a text-based canvas using '*' and '_' characters.

The project demonstrates the use of arrays, structures, functions, modular programming, and basic computer graphics concepts.

---

## Features

### Drawing Shapes , modifying and deleting objects

* Rectangle
* Line
* Triangle
* Circle

### Object Management

* Add new objects
* Delete objects using Object ID
* Modify existing objects using Object ID
* Display all objects on the canvas
* List all stored objects with their IDs and types

### Canvas Management

- A configurable 2D character array is used as the drawing canvas.
- Shapes are rendered using '*' characters.
- Empty spaces are represented using '_'.
- The canvas is redrawn whenever objects are added, modified, or deleted.

---

## Project Structure

2D-Graphics-Editor/

├── main.c        // Main menu and object management

├── shapes.c      // Shape drawing functions

├── shapes.h      // Function declarations and structures

└── README.md     // Project documentation

---

## Data Structures Used

### Shape Structure

Each graphical object is stored using a structure containing:

* Object ID
* Shape Type
* Coordinates
* Width and Height (for rectangles)
* Radius (for circles)

The program stores all objects in an array of Shape structures.

---

## Menu Options

1. Add Rectangle
2. Add Line
3. Add Triangle
4. Add Circle
5. List Objects
6. Delete Object
7. Modify Object
8. Display Canvas
9. Exit

---

## Compilation

Compile the program using GCC:

gcc main.c shapes.c -o editor

---

## Execution

Run the executable:

Windows:

editor.exe

Linux:

./editor

---

## Sample Workflow

1. Add shapes to the canvas.
2. Display the canvas.
3. View the list of stored objects.
4. Modify an object using its ID.
5. Delete an object using its ID.
6. Display the updated canvas.

---

## Concepts Demonstrated

* C Programming
* Modular Programming
* Structures
* Arrays
* Functions
* 2D Character Graphics
* Dynamic Object Management
* Git and GitHub Version Control

---

## Author

Shivanshi

First Year Engineering Student

## Conclusion

The 2D Graphics Editor provides a simple text-based graphical environment where users can create, modify, and manage geometric shapes. The project demonstrates fundamental programming concepts while implementing basic graphics editing functionality using the C programming language.
