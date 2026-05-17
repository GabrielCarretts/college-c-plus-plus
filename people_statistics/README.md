# People Statistics Tracker

## Description

A C++ console application designed to process and analyze demographic data. 

This program reads the names, ages, and heights of 20 individuals. It uses conditional logic to find the tallest and youngest people in the group, calculates the average age of individuals over 1.80m tall, and tallies how many people are strictly over 35 years old.

---

## Features

* Processes Name, Age, and Height for 20 consecutive entries.
* Validates inputs to ensure realistic human data (Ages 1-99, Heights 0-300cm).
* Dynamically tracks and stores the names and metrics of the Tallest and Youngest individuals.
* Calculates the average age exclusively for the subset of people taller than 180cm.
* Implements a division-by-zero failsafe to prevent crashes if no one over 180cm is entered.
* Runs in a continuous `do-while` loop to allow for multiple data entry sessions.

---

## Concepts Practiced

* Multiple concurrent `if` gate evaluations.
* Advanced accumulator logic (only summing values that pass specific conditions).
* Preventing Integer Division data loss by multiplying by `1.0`.
* Preventing Division by Zero crashes.
* Out-of-bounds initialization logic (setting `youngest_age = 200` and `tallest_height = 0` to force early overwrites).

---

## How It Works

* **The Setup:** The program initializes tracking variables with extreme baselines so the very first valid entry becomes the temporary "King of the Hill."
* **The Loop:** A `for` loop executes 20 times to collect user data.
* **The Traps:** Nested `while` loops trap the user if they input impossible heights or ages.
* **The Filter Engines:** * If a person is taller than 180cm, their age is added to a specific bucket.
  * If a person is over 35, a specific counter goes up.
  * If their height or age beats the current extremes, they become the new record holders.
* **The Report:** The loop closes, the floating-point average is safely calculated, and a formatted UI displays the final demographic report.

---

## Example

**Input:**

* Enter the name of the person: John
* Enter the age of the person: 25
* Enter the height of the person (cm): 185
* Enter the name of the person: Sarah
* Enter the age of the person: 40
* Enter the height of the person (cm): 160
* *(...continues for 20 people)*

**Output:**

* Average age of people over 1.80m: 25.00
* Total of people over 35: 1
* Tallest person: John (185 cm)
* Youngest person name: John
* Would you like to calculate more people? (Y/N)

---

## Notes

* Heights must be entered in centimeters (e.g., 185, not 1.85).
* The input buffer is safely cleared (`cin.ignore()`) at the end of every loop to allow for multi-word names on the next lap.
* ANSI colors are used for UI highlighting but may not display correctly in all legacy terminals.

---

## How to Run

1. Compile the program:

   ```bash
   g++ people_statistics.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Author

Gabriel Carretts