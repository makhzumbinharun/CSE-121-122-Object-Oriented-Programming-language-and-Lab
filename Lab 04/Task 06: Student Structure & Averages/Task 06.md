# Problem 06: Student Structure & Averages

## Description
Create a C++ program that manages student academic records using a `struct`. The program should handle multiple students, store their marks for three distinct subjects, and calculate the average score for each student.

## Specifications

### 1. Structure Definition (`Student`)
Define a structure named `Student` with the following members:
* `name`: A string (or char array) for the student's name.
* `roll`: An integer for the roll number.
* `marks`: An integer array of size 3 to store marks for three subjects.

### 2. Functional Requirements
* **Input**:
    * Ask the user for the number of students ($N$).
    * Loop $N$ times to accept the name, roll number, and 3 subject marks for each student.
* **Processing**:
    * Calculate the average marks for each student.
* **Output**:
    * Display the Name, Roll Number, and Calculated Average for every student in a tabular or list format.

## Input Format
1.  An integer $N$ (Number of students).
2.  For each student:
    * Name (String)
    * Roll Number (Integer)
    * Three integers for marks (e.g., 80 90 85)

## Output Format
Print the details for each student including their computed average.

---

### Sample Input
```text
2
Alice 101
80 85 90
Bob 102
70 75 80
