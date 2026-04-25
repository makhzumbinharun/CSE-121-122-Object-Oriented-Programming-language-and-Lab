# University Staff Salary System

**1.** Suppose, you are designing a program called "University Staff Salary System" for a university that has different types of staff such as "Professor", "Adjunct Faculty", and "Visiting Lecturer".

Each type of staff has different rules for calculating their annual salary:
* **Professors** receive a fixed monthly salary along with a yearly bonus.
* **Adjunct Faculty** are paid based on the number of courses they teach.
* **Visiting Lecturers** are paid per lecture session.

Now, you need to develop a system that allows easy calculation of the annual salary for each type of staff using the concept of pure virtual function, polymorphism, and pointer object.

### **Class Structure Requirements:**

* **`Staff`**
  * Attributes: `id`, `name`
  * Methods: `Salary()` *(Base)*

* **`Professor`** (inherits from Staff)
  * Attributes: `monthlySalary`, `yearlyBonus`
  * Methods: `Salary()` *(Derived)*

* **`AdjunctFaculty`** (inherits from Staff)
  * Attributes: `courseFee`, `numberOfCourses`
  * Methods: `Salary()` *(Derived)*

* **`VisitingLecturer`** (inherits from Staff)
  * Attributes: `perLectureRate`, `totalLectures`
  * Methods: `Salary()` *(Derived)*
