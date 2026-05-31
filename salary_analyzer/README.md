# Salary Analyzer

A C++ terminal application designed to read the names, biological sexes, and salaries of an undetermined number of employees. Once the data entry is finished, it calculates and compares the average salaries between male and female employees to determine which demographic has the higher average income.

---

## What it does

* **Dual Running Totals:** Simultaneously tracks the sum of salaries and the total headcount for two separate demographics on the fly.
* **Master Safe Zone:** Includes a structural fail-safe to prevent logical errors and fatal divide-by-zero crashes if the user terminates the program before entering any employees.
* **Independent Math Protection:** Uses isolated `if/else` gates for the mathematical operations, ensuring that if one demographic has zero entries, the other can still be calculated accurately without crashing the program.
* **Handles Bad Input:** Uses `cin.fail()` and buffer clearing to safely catch and erase invalid inputs (like typing letters for salaries).
* **Keeps Going:** Wraps the entire application in a master reset loop, allowing the user to track multiple different companies or departments in a single session.

---

## Skills Applied

* `if` and `else if` cascades
* Nested `do-while` loops and string-based sentinel logic (`X`)
* Input validation and error handling (`cin.clear()`, `cin.ignore()`)
* Floating-point type casting and stream formatting (`<iomanip>`)
* Variable state management

---

## Example Run

**What you type:**

```text
====> Welcome to the Salary Analyzer! <====

Enter the name of the employee (type 'X' to stop): Alice
Enter the sex of the employee (M/F): F
Enter the salary of the employee: 5000

Enter the name of the employee (type 'X' to stop): Bob
Enter the sex of the employee (M/F): M
Enter the salary of the employee: -2000
Invalid salary! Must be a positive number! Try again: 4500

Enter the name of the employee (type 'X' to stop): X
```

**The Results:**

```text
Average Salary for Males: $4500.00
Average Salary for Females: $5000.00

The female employees have a higher average salary.

Would you like to calculate more employees? (Y/N) 
```

---

## How to Run It

1. Compile the `.cpp` file in your terminal:

    ```bash
    g++ salary_analyzer.cpp -o app
    ```

2. Run it:

    ```bash
    ./app
    ```

---
**Author:** Gabriel Carretts
