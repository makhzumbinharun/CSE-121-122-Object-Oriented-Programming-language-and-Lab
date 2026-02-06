# Problem: Find the Topper (Friend Function)

## Description
Create a program that stores and compares the marks of two students to determine who performed better.

You must design a class named `Student` and use a **friend function** to access its private data for comparison.

## Class Specifications
1.  **Attributes** (Private):
    * `marks`: An integer to store the student's score.
    * *(Optional)* `name`: A string to store the student's name (to identify them in the output).
2.  **Methods** (Public):
    * **Constructor**: To initialize the `marks` (and `name`) when the object is created.
3.  **Friend Function**:
    * `void findTopper(Student s1, Student s2)`: This function should compare the private `marks` of both objects and print the name/details of the student with the higher score.

## Task
1.  Create two `Student` objects in `main` (e.g., "Alice" with 85 marks, "Bob" with 90 marks).
2.  Call the global friend function `findTopper` passing these two objects.
3.  Display the result.

---

### Sample Code Structure
```cpp
int main() {
    Student s1("Alice", 85);
    Student s2("Bob", 92);

    findTopper(s1, s2);
    
    return 0;
}
