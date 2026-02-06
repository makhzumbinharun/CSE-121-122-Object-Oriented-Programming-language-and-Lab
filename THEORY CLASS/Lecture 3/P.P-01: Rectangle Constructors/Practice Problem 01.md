# Problem: Rectangle Constructors

## Description
You are required to design a C++ class named `Rectangle` that represents a geometric rectangle with a specific length and width.

The class must handle object initialization in two ways:
1.  **Default**: Creating a rectangle with zero dimensions.
2.  **Parameterized**: Creating a rectangle with specific dimensions provided by the user.

## Class Specifications
1.  **Attributes** (Private):
    * `length`: Integer or float.
    * `width`: Integer or float.
2.  **Constructors** (Public):
    * **Default Constructor**: Initializes `length` and `width` to `0`.
    * **Parameterized Constructor**: Accepts two arguments to initialize `length` and `width`.
3.  **Methods** (Public):
    * `area()`: Calculates and returns the area (`length * width`).
    * `display()`: Prints the length, width, and calculated area in a readable format.

## Input Format
1.  (Optional) Inputs for length and width if testing the parameterized constructor.

## Output Format
Display the details of the rectangle as shown in the sample.

---

### Sample Code Structure
```cpp
int main() {
    // 1. Test Default Constructor
    Rectangle rect1;
    cout << "Rectangle 1 (Default):" << endl;
    rect1.display();

    // 2. Test Parameterized Constructor
    Rectangle rect2(10, 5);
    cout << "\nRectangle 2 (Parameterized):" << endl;
    rect2.display();

    return 0;
}
