# Bangladesh University of Business and Technology (BUBT)
## Department of Computer Science and Engineering
### Class Test 02: Spring-2026

**Course Code:** CSE 111 | **Course Title:** Object Oriented Programming Language  
**Intake:** 56th, **Program:** B.Sc. Engg in CSE  

---

**Time:** 45 Minutes  
**Marks:** 15  

> *[Answer all the questions]*

---

**1.** Explain different types of inheritance with proper example. **[5]**

**2.** Suppose, you have designed a class named- "Room" with the following attributes- "room_no", "price" and "size". Now you need to add an extra functionality regarding the comparison between two rooms using the concept of operator overloading. **[5]** Construct two new operator overloading functions using the concept of friend function for operators: ">" and "<" compare between two room objects based on their "price".

**3.** Read the given scenario: **[5]**

               +---------+
               | Class A |
               +---------+
                 /  |  \
               /    |    \
             v      v      v
    +---------+ +---------+ +---------+
    | Class B | | Class C | | Class D |
    +---------+ +---------+ +---------+
             \             /
               \         /
                 v     v
               +---------+
               | Class E |
               +---------+

For the above diagram, let there is a function in class 'A' named `output()` which you want to invoke by the class 'E' object. Does this scenario create any ambiguity? - Apply the knowledge of inheritance and justify your answer with correct code implementation.

---
### Lab
---

**4.** A class called "X" has two operator overloading functions. Now implement for the statement: `ob1= 45-ob2` to compile correctly.

**5.** Create a program demonstrating inheritance using the following hierarchy:

* **Person Class:** Contains name and age attributes. Provide a method to set and display personal information.
* **Student Class** (inherits from Person): Contains a studentID attribute. Provide a method to set and display student information.
* **TA Class** (inherits from Student): Contains a semester attribute. Provide a method to set and display TA student details.

In the `main()` function, create an object of the TA class, set all attributes, and display the complete information.

---
*Page | 1 of 1*
