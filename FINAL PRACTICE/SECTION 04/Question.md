# Bangladesh University of Business and Technology
**Course:** Object-Oriented Programming  
**Course Code:** CSE 112  
**Intake:** 56 | **Section:** 4 | **Lab Final**

---

Design a system with 5 classes as described below. Resolve all ambiguities properly and handle exceptions as specified.

## Class Hierarchy & Requirements

### 1. Class `Device`
* Contains a pure virtual function `void showStatus();`

### 2. Class `Employee` (Derived from Device)
* Contains a function `void employeeID()` that prints a specific ID, e.g., "EMP-5421".

### 3. Class `Laptop` and Class `Desktop` – both derived from `Employee`.
* **`Laptop`** has a function `void compute(int x, int y)` that performs division of (20, 4) and prints the result.
* **`Desktop`** has a function `void validateEmail(string email)`.
    * Use exception handling inside this function.
    * Define a custom exception class or use standard exceptions to handle the following cases:

| # | Validation Rule | Example (Invalid) |
|---|---|---|
| 1 | Email cannot start with a special character | `@user.com` |
| 2 | Email cannot start with a digit | `2user@domain.com` |
| 3 | Must contain exactly one `@` symbol | `userdomain.com` |
| 4 | Local part (before `@`) must be at least 3 characters | `ab@domain.com` |
| 5 | Domain must end with `.com`, `.org`, or `.net` | `user@domain.gov` |

* For violations, throw an appropriate exception and print a meaningful error message.

### 4. Class `Tablet` – inherits both `Laptop` and `Desktop`
* Contains its own function `void compute(int x, int y)` that performs multiplication of (6, 7) and prints the result.

---

## Tasks

1. Create all five classes with proper inheritance relationships.
2. Resolve any ambiguity that arises due to multiple inheritance (especially the `compute` function and the `employeeID` function if needed).
3. In `main()`:
    * Create an object of class `Tablet`.
    * Call:
        * `employeeID()` from the `Employee` base class.
        * `validateEmail()` from `Desktop` class – pass at least two different emails (one valid, one invalid) to demonstrate exception handling.
        * `compute(20,4)` from both `Laptop` and `Tablet` – show which version gets called by default and how you can explicitly call the other version.
    * Also demonstrate calling the pure virtual function `showStatus()` – you may provide a definition in any derived class (e.g., in `Employee` or `Tablet`) to make the class concrete.

## Expected Output (Indicative)

Employee ID: EMP-5421
<br><br>
--- Validating email: john.doe@example.com ---<br>
Error: Domain must end with .com, .org, or .net
<br><br>
--- Validating email: user123@gmail.com ---<br>
Email is valid.
<br><br>
Laptop compute (division 20/4) = 5<br>
Tablet compute (multiplication 6*7) = 42<br>
Calling Laptop's compute from Tablet object using scope resolution: 5<br>
Device status: All systems operational.
