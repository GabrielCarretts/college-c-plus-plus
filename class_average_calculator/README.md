# Class Average Calculator

## What is this?

A C++ project that is a terminal program designed for entering the names and grades of up to 15 students. Once the data entry is complete, the program calculates the overall class average and identifies the students with the highest and lowest scores.

---

## What it does

* **Finds the Top and Bottom Scores:** Identifies the highest and lowest grades as they are entered, without needing to save everything in complex arrays.
* **Handles Bad Input:** If a letter is accidentally typed instead of a number for a grade, the program won't crash or freeze. It catches the error, clears it out, and asks the user to try again.
* **Keeps Going:** Once it finishes calculating one class, there is an option to reset and enter a whole new class without having to restart the program.
* **Looks Clean:** Includes simple color codes so the text is easier to read in the terminal.

---

## Skills Applied

* `if` and `else if` statements
* `while` and `do-while` loops
* Fixing input stream errors (`cin.fail()`, `cin.clear()`, `cin.ignore()`)
* Protecting the math from breaking (like preventing divide-by-zero errors)
* Formatting decimals so they look like real grades (`<iomanip>`)

---

## Example Run

**What you type:**

```text
====> Welcome to the Class Average Calculator! <====

Enter the name of the student: Alice
Enter the grade of the student (0-10): 9.5

Enter the name of the student: Bob
Enter the grade of the student (0-10): a
Invalid grade! Must be a number from 0-10! Try again: 5

Enter the name of the student: end
```

**The Results:**

```text
====> Final Result <====

Average grade of class: 7.25
Highest Grade: 9.50 achieved by Alice
Lowest Grade: 5.00 scored by Bob

Would you like to calculate another class? (Y/N) 
```

---

## How to Run It

1. Compile the `.cpp` file in your terminal:

    ```bash
    g++ class_average_calculator.cpp -o app
    ```

2. Run it:

    ```bash
    ./app
    ```

---
**Author:** Gabriel Carretts