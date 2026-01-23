# Problem 06: Secure Bank Account

## Description
Design a class named `BankAccount` that represents a customer's account at a bank. The system must enforce data encapsulation to ensure the security of sensitive financial data like the account number and balance.

## Class Specifications

### 1. Attributes
The class must contain the following attributes:

* **Private Attributes** (Accessible only inside the class):
    * `accountNumber` (Integer or String): Unique identifier for the account.
    * `balance` (Double): Stores the current funds.
* **Public Attributes** (Accessible directly):
    * `accountHolderName` (String): Name of the owner.
    * `bankName` (String): Name of the institution.

### 2. Methods
Implement the following public methods:

* **`deposit(amount)`**:
    * Adds the specified `amount` to the `balance`.
    * **Constraint**: Amount must be greater than zero.
* **`withdraw(amount)`**:
    * Deducts the specified `amount` from the `balance`.
    * **Constraint**: Withdrawal is only allowed if the `balance` is sufficient (Balance >= Amount).
* **`getBalance()`**:
    * Returns the current value of `balance`.
* **`displayAccountDetails()`**:
    * Prints the Account Holder Name, Bank Name, Account Number, and Current Balance.

## Encapsulation Rules
1.  The `balance` and `accountNumber` must **never** be accessed directly from outside the class (e.g., `obj.balance = 500` is forbidden).
2.  All modifications to the balance must occur strictly through the `deposit` and `withdraw` methods.

---

### Sample Scenario (Main Function)
* **Initialize**: User "John Doe" at "City Bank" with Account #1001 and initial balance 500.0.
* **Action 1**: Deposit 1000.0.
* **Action 2**: Withdraw 200.0.
* **Action 3**: Try to Withdraw 5000.0 (Should fail).

### Sample Output
```text
Account Created for: John Doe

[Deposit] Success: 1000.0 deposited.
[Withdraw] Success: 200.0 withdrawn.
[Withdraw] Error: Insufficient balance.

--- Account Details ---
Bank: City Bank
Holder: John Doe
Account #: 1001
Balance: 1300.0
