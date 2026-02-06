# Problem: Pointer to Object

## Description
Define a class named `Animal` that represents a generic animal and its corresponding sound. The goal of this problem is to practice using **pointers to objects** in C++.

## Class Specifications
1.  **Attributes** (Private):
    * `sound`: A string variable to store the animal's sound.
2.  **Methods** (Public):
    * **Constructor**: Initializes the `sound` variable with a given value.
    * **`get()`**: A getter function that returns the value of `sound`.

## Task
In your `main()` function:
1.  Create an object of the `Animal` class and initialize it with a sound (e.g., "Bark").
2.  Declare a pointer `pt` to an `Animal` object.
3.  Store the **address** of your object in `pt`.
4.  Use the pointer `pt` (using the arrow operator `->`) to call the `get()` function and display the sound.

---

### Sample Code Structure
```cpp
int main() {
    // 1. Create Object
    Animal cat("Meow");

    // 2. Declare Pointer & Store Address
    Animal* pt = &cat;

    // 3. Access via Pointer
    cout << "Sound: " << pt->get() << endl;

    return 0;
}
