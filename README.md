# CIS25
Week 6 Module7.ccp

this program demonstrates dynamic arrays and binary search in C++

This program defines a structure 

'''cpp
struct Item {
    string name;
    int id;
}

Dynamically allocates an array if 100 Item objects using new 
Fills the array with sample data:

id values from 1 to 100 sorted ascending order

name values like "Item 1", "Item2", ..., "Item 100"

Asks the user to enter an id to search for 

Uses a binary search function to search the sorted array by id

if the id is not found it prints a "not found" message
frees the dynamic memort at the end using delete[]
