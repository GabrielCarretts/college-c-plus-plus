# Consortium Manager (C++)

## Description

A simple C++ console application that calculates the total amount paid and the remaining debt in a consortium.

The user provides:

* the total number of installments
* the number of installments already paid
* the value of each installment

Based on this data, the program calculates the total paid amount and the remaining balance.

---

## Features

* **Input validation:** Prevents invalid values such as negative numbers or paying more installments than exist
* **Accurate calculations:** Computes total paid and remaining debt using basic arithmetic operations
* **Looped execution:** Allows the user to perform multiple calculations without restarting the program
* **Color-coded output:** Uses ANSI escape codes to improve readability in the terminal

---

## Concepts Practiced

This project was developed as part of a first-semester programming course and demonstrates:

* Variables and data types (`int`, `double`, `char`)
* Input and output (`cin`, `cout`)
* Arithmetic operations
* Conditional logic
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* `while` loops (input validation)
* `do-while` loops (program repetition)

---

## Technologies Used

* C++
* `<iostream>` for input and output
* ANSI escape codes for terminal colors

---

## How to Run

1. Clone this repository:

   ```
   git clone <your-repo-link>
   ```

2. Navigate to the project folder:

   ```
   cd consortium-manager
   ```

3. Compile the program:

   ```
   g++ main.cpp -o app
   ```

4. Run the executable:

   ```
   ./app
   ```

---

## Notes

* ANSI color codes may not work on all terminals (especially some Windows environments)
* This project focuses on learning logic and control flow, not advanced UI or error handling
