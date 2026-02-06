# Problem 06: Recursive Factorial

## Description
Write a program to calculate the factorial of a non-negative integer $N$ using **recursion**.

The factorial of a number $N$ (denoted as $N!$) is the product of all positive integers less than or equal to $N$. By definition, the factorial of 0 is 1.

## Mathematical Definition
$$
N! = 
\begin{cases} 
1 & \text{if } N = 0 \\
N \times (N-1)! & \text{if } N > 0 
\end{cases}
$$

## Constraints
* $0 \le N \le 12$ (Since $13!$ exceeds the range of a standard 32-bit integer).
* The solution **must** use a recursive function.

## Input Format
A single integer $N$.

## Output Format
Print the factorial of $N$.

---

### Sample Input 1
```text
5
