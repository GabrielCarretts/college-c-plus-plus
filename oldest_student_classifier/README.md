# Oldest Student Classifier


A C++ project that is a terminal program designed to read the names and ages of an undetermined number of students. Once the data entry is complete, the program identifies and prints the name and age of the oldest student.

---

## What it does
* **Tracks the Oldest Student:** Uses a "King of the Hill" logic to evaluate and update the oldest student on the fly as data is entered, without needing complex arrays.
* **Dynamic Data Entry:** Uses an age of `0` as a sentinel value to stop the loop, allowing for any number of students to be entered without a fixed limit.
* **Handles Bad Input:** If a letter is typed instead of a number, or if a negative age is entered, the program catches the error, clears it out, and asks the user to try again without crashing.
* **Empty Class Protection:** If `0` is entered for the very first student, the program safely notifies the user that no valid students were entered instead of printing blank or garbage data.
* **Keeps Going:** Once finished, there is an option to reset and enter a whole new class without having to restart the program.

---

## Skills Applied
* `if` and `else if` statements
* Nested `do-while` loops and sentinel-controlled logic
* Fixing input stream errors (`cin.fail()`, `cin.clear()`, `cin.ignore()`)
* Variable state management and reset mechanics

---

## Example Run

**What you type:**
```text
====> Welcome to the Oldest Student Classifier! <====

Enter the name of the student: Alice
Enter the age of the student (0 to stop): 22

Enter the name of the student: Bob
Enter the age of the student (0 to stop): -5
Invalid age! Must be a positive number! Try again: 25

Enter the name of the student: Charlie
Enter the age of the student (0 to stop): 0
```

**The Results:**
```text
The oldest student is Bob with 25 years old!

Would you like to calculate another class? (Y/N) 
```

---

## How to Run It
1.  Compile the `.cpp` file in your terminal:
    ```bash
    g++ oldest_student_classifier.cpp -o app
    ```
2.  Run it:
    ```bash
    ./app
    ```

---
**Author:** Gabriel Carretts