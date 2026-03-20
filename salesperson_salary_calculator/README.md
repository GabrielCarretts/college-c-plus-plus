# Salesperson Salary Calculator

## Description

A C++ console application that calculates a salesperson's final salary based on three factors:

* a fixed base salary
* a fixed commission for each car sold
* a percentage commission on total sales

The program reads the salesperson's name, number of cars sold, and total sales value, then displays a formatted salary report.

---

## Features

* Reads salesperson name using `getline()`
* Validates numeric input to prevent negative values
* Calculates commission per car sold
* Calculates commission based on total sales value
* Displays a complete salary report
* Uses ANSI colors to improve terminal readability
* Formats monetary values with 2 decimal places using `<iomanip>`
* Allows repeated calculations with a `do-while` loop

---

## Concepts Practiced

* Variables and constants (`const`)
* Input and output (`cin`, `cout`, `getline`)
* Arithmetic operations
* Percentage calculations
* Input validation with `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* `do-while` loops for repeated execution
* Output formatting with `<iomanip>` (`fixed`, `setprecision`)
* Input buffer handling with `cin.ignore()`
* Basic terminal styling with ANSI escape codes

---

## Technologies Used

* C++
* `<iostream>` for input and output
* `<iomanip>` for number formatting
* ANSI escape codes for terminal colors

---

## How to Run

1. Compile the program:

   ```bash
   g++ salesperson_salary_calculator.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Salesperson name: Gabriel
* Cars sold: 3
* Total sales value: R$ 20000.00

**Output:**

* Base salary: R$ 350.00
* Car commission: R$ 150.00
* Sales commission: R$ 1000.00
* Final total salary: R$ 1500.00

---

## Notes

* The program allows zero cars sold and zero total sales
* Negative values are not accepted
* ANSI colors may not display correctly on all terminals

---

## Author

Gabriel Carretts
