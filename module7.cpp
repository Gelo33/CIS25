#include <iostream>
#include <string>
using namespace std;

// Struct to store each inventory item
struct Item {
    string name;
    int id;
};

// Binary search by ID on a sorted array (sorted by id)
int binarySearchById(Item* inventory, int size, int targetId) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;  // middle index

        if (inventory[mid].id == targetId) {
            // Found the item
            return mid;
        } else if (targetId < inventory[mid].id) {
            // Look in the left half
            right = mid - 1;
        } else {
            // Look in the right half
            left = mid + 1;
        }
    }

    // Not found
    return -1;
}

int main() {
    // 1. Dynamically allocate an array of Items
    int size = 100;                 // at least 100 records
    Item* inventory = new Item[size];

    // 2. Populate the array with sorted sample data
    // - id goes from 1000, 1001, ..., 1099  (sorted by id)
    // - name goes "Item 1", "Item 2", ..., "Item 100"
    for (int i = 0; i < size; i++) {
        inventory[i].id = 1000 + i;
        inventory[i].name = "Item " + to_string(i + 1);
    }

    cout << "Inventory initialized with " << size << " items.\n";
    cout << "IDs range from 1000 to " << 1000 + size - 1 << ".\n\n";

    // 3. Ask the user for an ID to search for
    int searchId;
    cout << "Enter an item ID to search for: ";
    cin >> searchId;

        int index = binarySearchById(inventory, size, searchId);

 
    if (index != -1) {
        cout << "Item found!\n";
        cout << "Index: " << index << endl;
        cout << "Name:  " << inventory[index].name << endl;
        cout << "ID:    " << inventory[index].id << endl;
    } else {
        cout << "Item with ID " << searchId << " not found in inventory.\n";
    }

   
    delete[] inventory;

    return 0;
}
