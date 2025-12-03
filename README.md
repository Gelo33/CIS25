# Week 5

### module6.cpp
This program works with strings, classes, and file I/O.

- It defines a class called `Item` with a `string` name and an `int` quantity.
- The `saveToFile()` function writes the item data to a file named `items.txt` in the format: `name,quantity`.
- The `loadFromFile()` function reads from `items.txt` and prints the contents to the screen.
- In `main()`, an `Item` object is created, given a name and quantity, then saved to the file and loaded back.

### module11.cpp
This program shows how constructors and destructors work in a C++ class.

- It defines a class called `Product` with private data: `id`, `name`, and `price`.
- The constructor initializes these values and prints a message when a `Product` object is created.
- The destructor prints a message when the object is destroyed at the end of the program.
- The `printDetails()` function prints the product’s ID, name, and price.
- In `main()`, a `Product` object is created and `printDetails()` is called to display its information.
