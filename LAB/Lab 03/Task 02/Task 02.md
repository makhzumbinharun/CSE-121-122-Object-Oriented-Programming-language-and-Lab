# Task 02: Bank Account Lifecycle

## Description
Design a class named `BankAccount` that simulates the lifecycle of a financial account. The class should manage the account's identity and funds, while explicitly handling the initialization and closure of the account.

## Class Specifications
1.  **Attributes**:
    * `accountNumber`: An integer or string representing the account ID.
    * `balance`: A floating-point number representing the current funds.
2.  **Methods**:
    * **Parameterized Constructor**: Initialize `accountNumber` and `balance` when the object is created.
    * **Destructor (`~BankAccount`)**: Display a message indicating that the account is being closed (e.g., "Account [ID] closed.") when the object is destroyed.
    * **`display()`**: A helper method to show current account details.

## Task
1.  Create an object of the `BankAccount` class using user input or fixed values.
2.  Display the account details.
3.  Observe the console output to verify that the **Destructor** message appears automatically when the program terminates or the object goes out of scope.

## Input Format
1.  An integer for the **Account Number**.
2.  A double for the **Initial Balance**.

## Output Format
1.  Print the account details immediately after creation.
2.  Print the closure message (from the destructor) at the end.

---

### Sample Input
```text
101
5000.50
