# Problem 05: Vowel or Consonant

## Description
Write a program that takes a single character as input and determines whether it is a **Vowel** or a **Consonant**. 

The program must also validate the input: if the character is not a standard English letter (A-Z or a-z), it should report the input as invalid.

## Constraints
* The input is a single character.
* Vowels are: `A, E, I, O, U` (case insensitive).

## Logic
1.  If the input is not an alphabet letter, print `Invalid Input!`.
2.  If the input is an alphabet letter:
    * Check if it is a vowel.
    * If it is not a vowel, it is a consonant.

## Input Format
A single character $C$.

## Output Format
Print the character followed by its classification (Vowel or Consonant) or an error message.

---

### Sample Input 1
```text
E
