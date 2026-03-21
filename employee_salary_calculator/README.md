# Employee Salary Calculator

## Description

A C++ console application that calculates an employee’s net salary based on sequential deductions.

The program reads the employee’s name and gross salary, applies a 10% pension deduction, then applies a 25% income tax deduction on the remaining salary. It outputs a complete breakdown of all values, including total deductions and final net salary.

---

## Features

* Reads employee name using `getline()`
* Validates salary input to prevent invalid values
* Applies **sequential deductions** (pension → income tax)
* Calculates total deductions and net salary
* Displays a structured salary report
* Uses ANSI colors for enhanced terminal readability
* Formats monetary values with 2 decimal places using `<iomanip>`
* Supports repeated calculations using a `do-while` loop

---

## Concepts Practiced

* Variables and constants (`double`, `string`, `char`)
* Input handling (`cin`, `getline`, `cin.ignore`)
* Arithmetic operations with percentages
* Sequential logic (order-dependent calculations)
* Input validation using `while` loops
* Boolean logic (`&&`, `||`)
* Loop control with `do-while`
* Output formatting using `<iomanip>` (`fixed`, `setprecision`)
* Basic UI/UX with ANSI escape codes

---

## Technologies Used

* C++
* `<iostream>` for input/output
* `<iomanip>` for formatting
* ANSI escape codes for terminal colors

---

## How to Run

1. Compile the program:

   ```bash
   g++ employee_salary_calculator.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Employee name: John
* Gross salary: $1000

**Output:**

* Gross salary: $1000.00
* Pension deduction (10%): $100.00
* Income tax deduction (25% after pension): $225.00
* Total deduction: $325.00
* Net salary: $675.00

---

## Notes

* Gross salary must be greater than zero
* Deductions are applied sequentially (order matters)
* ANSI colors may not display correctly on all terminals
* Currency is displayed using `$` for consistency

---

## Author

Gabriel Carretts
