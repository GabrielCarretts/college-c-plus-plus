# Flight Sorter

A C++ terminal application designed to register an unknown number of flight passengers and sort them based on their final destination. Once boarding is complete, it outputs the passenger manifest grouped strictly by layover cities A, B, and C.

---

## What it does

* **Dynamic Boarding:** Registers passengers continuously using dynamic memory until the user triggers the manual "end" command.
* **Strict Input Locking:** Uses compound validation loops to ensure origin and destination cities only accept valid layovers (A, B, or C).
* **Multi-Pass Data Sorting:** Reads the parallel memory banks three distinct times to group and print the manifest strictly by destination.
* **Session Persistence:** Wraps the entire application in a master loop, allowing the user to sort multiple flights without restarting the terminal.

---

## Skills Applied

* Dynamic memory allocation (`std::vector` and `.push_back()`)
* Infinite loops (`while (true)`) and sentinel-controlled logic (`end` to break)
* Parallel arrays syncing multiple data points across the same memory index
* Compound logical operators (`||` and `&&`) for string validation
* Nested `do-while` loops for continuous session management

---

## Example Run

**What you type:**

```text
====> Welcome to the Flight Sorter! <====

Enter the passenger name (or 'end' to stop): Gabriel
Enter the origin city (A, B, or C): C
Enter the destination city (A, B, or C): A

Enter the passenger name (or 'end' to stop): Sarah
Enter the origin city (A, B, or C): A
Enter the destination city (A, B, or C): B

Enter the passenger name (or 'end' to stop): end
```

**The Results:**

```text
====> Passengers going to City A <====
- Gabriel (From: C)

====> Passengers going to City B <====
- Sarah (From: A)

====> Passengers going to City C <====

Would you like to calculate more passengers? (Y/N) 
```

---

## How to Run It

1. Compile the `.cpp` file in your terminal:

    ```bash
    g++ flight_sorter.cpp -o app
    ```

2. Run it:

    ```bash
    ./app
    ```

---
**Author:** Gabriel Carretts