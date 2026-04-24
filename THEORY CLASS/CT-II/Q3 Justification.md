# Justification: Ambiguity in Inheritance

## Does this scenario create any ambiguity?
**Yes, this scenario creates ambiguity.** This specific class structure is known as **Multipath Inheritance**, which leads to the famous **Diamond Problem**.

### Why does it happen?
In the given diagram, classes `B`, `C`, and `D` all inherit from class `A`. Therefore, they each receive a copy of class `A`'s members, including the `output()` function.

When class `E` inherits from `B`, `C`, and `D`, it ends up inheriting **three separate copies** of class `A`. If we create an object of class `E` and attempt to invoke the `output()` function, the compiler gets confused. It does not know which path to take to access `output()` (whether it should go through `B`, `C`, or `D`), resulting in an **ambiguity error**.

### The Solution: Virtual Inheritance
To resolve this ambiguity, we must use **virtual inheritance** when classes `B`, `C`, and `D` inherit from `A`. Declaring the base class as `virtual` ensures that only **one shared copy** of class `A` is passed down to class `E`, regardless of how many inheritance paths exist.

---
