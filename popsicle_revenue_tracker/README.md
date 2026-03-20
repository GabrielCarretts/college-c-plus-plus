# Popsicle Revenue Tracker

## Description

A C++ console application that calculates the revenue generated from selling three types of popsicles.

Each popsicle type has a fixed price, and the user enters the quantity sold for each. The program then calculates and displays the total revenue per type and the overall total.

---

## Features

* Uses fixed prices for three popsicle types
* Accepts quantity sold for each type
* Validates input to prevent negative values
* Calculates revenue per popsicle type
* Displays a grand total of all sales
* Uses ANSI colors for improved terminal readability
* Formats monetary values with 2 decimal places using `<iomanip>`
* Allows repeated calculations with a loop

---

## Concepts Practiced

* Variables and constants (`const`)
* Input and output (`cin`, `cout`)
* Arithmetic operations
* Input validation using `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* `do-while` loops for repetition
* Output formatting with `<iomanip>` (`fixed`, `setprecision`)
* Basic UI design with ANSI escape codes

---

## Technologies Used

* C++
* `<iostream>` for input/output
* `<iomanip>` for formatting numbers
* ANSI escape codes for terminal colors

---

## How to Run

1. Compile the program:

   ```bash
   g++ popsicle_revenue_tracker.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Notes

* The program allows zero sales (0), but does not accept negative values
* Prices are fixed and defined as constants in the code
* ANSI colors may not display correctly on all terminals

---

## Author

Gabriel Carretts
