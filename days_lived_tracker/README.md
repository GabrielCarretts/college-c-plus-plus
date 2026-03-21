# Days Lived Tracker

## Description

A C++ console application that calculates how many days a person has lived based on their date of birth.

The program uses a simplified calendar system where each month has 30 days and each year has 360 days. The user provides both the birth date and the current date in the format `DD/MM/YYYY`, and the program computes the total number of days lived.

---

## Features

* Accepts dates in a user-friendly `DD/MM/YYYY` format
* Validates input format using `/` separators
* Ensures valid ranges for:

  * Day (1–30)
  * Month (1–12)
  * Year (> 0)
* Prevents invalid chronological input (birth date after current date)
* Calculates total days lived using a simplified calendar system
* Supports repeated calculations using a `do-while` loop
* Includes colored terminal output for better readability

---

## Concepts Practiced

* Structured input parsing using `cin` with formatted input
* Logical validation using `while` loops
* Boolean expressions with `&&` and `||`
* Data transformation (date → total days)
* Arithmetic operations
* Loop control (`do-while`)
* Basic UI/UX improvements with ANSI colors

---

## How It Works

1. The user enters:

   * Date of birth
   * Current date

2. Each date is converted into total days:

   ```
   total_days = (year * 360) + (month * 30) + day
   ```

3. The program calculates:

   ```
   days_lived = current_total - birth_total
   ```

---

## How to Run

1. Compile the program:

   ```bash
   g++ days_lived_tracker.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Date of birth: 15/08/2005
* Current date: 03/04/2026

**Output:**

* You have lived 7413 days

---

## Notes

* This program uses a simplified calendar (30 days/month, 360 days/year)
* Not intended for real-world date accuracy
* Input must follow the exact format `DD/MM/YYYY`
* ANSI colors may not display correctly in all terminals

---

## Author

Gabriel Carretts
