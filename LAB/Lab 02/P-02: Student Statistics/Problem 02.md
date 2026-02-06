# Problem 02: Student Statistics

## Description
Design a class named `Student` that represents a student's academic record. The class needs to store personal identification details along with performance metrics in three distinct subjects.

Your task is to implement the class structure, calculate the aggregate performance (total and average), and display a summary report.

## Class Specifications
1.  **Attributes** (Private):
    * `name`: A string representing the student's name.
    * `rollNumber`: An integer representing the student's roll number.
    * `marks`: An array or three separate variables to store marks for 3 subjects.
2.  **Methods** (Public):
    * `calculateTotal()`: Returns the sum of the marks in all three subjects.
    * `calculateAverage()`: Returns the average of the marks.
    * `displayDetails()`: Prints the name, roll number, total marks, and average.
    * *(Implicit)* Constructor or Setters to initialize the object.

## Input Format
The input consists of:
1.  A string $S$ for the student's name.
2.  An integer $R$ for the roll number.
3.  Three integers $M_1, M_2, M_3$ representing marks in three subjects.

## Output Format
Display the student's name, roll number, total marks, and average marks formatted as shown in the sample.

## Formulas
$$\text{Total} = M_1 + M_2 + M_3$$
$$\text{Average} = \frac{\text{Total}}{3}$$

---

### Sample Input 1
```text
Alice 101
85 90 80
