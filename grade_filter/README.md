# The Grade Filter (Class Analyzer)

## Description
A C++ terminal application that processes and analyzes the academic performance of a 20-student class. The script utilizes parallel arrays to physically link string data (student names) to integer data (grades). It calculates the overall class average using floating-point math, and then utilizes a secondary output loop to isolate and print only the students who scored strictly above the class average. This final version features a custom ANSI color interface, a continuous session restart loop, crash-proof input validation, and proper buffer management.

## Concepts Applied
* **Multi-Pass Architecture:** Separating Data Collection (Input), Calculation (Process), and Filtering (Output) into distinct, isolated loops to ensure all data is collected before the baseline average is calculated.
* **Parallel Arrays:** Syncing multiple data types across the same memory index (`student_names[i]` and `student_grade[i]`).
* **Dynamic Filtering:** Using a calculated variable (`grade_average`) as the conditional baseline for an `if` statement.
* **Session Loops:** Utilizing a `do-while` architecture to let the user analyze multiple classes endlessly without restarting the terminal.
* **Buffer Management:** Strategically deploying `cin.ignore()` to clear leftover newline characters (`\n`) from the memory buffer, preventing standard input (`cin >>`) from skipping `getline()` string collection.
* **Crash-Proofing:** Implementing `cin.fail()` traps to protect the math accumulators from invalid character inputs.

## How to Run
1. Compile the file in your terminal:
   ```bash
   g++ grade_filter.cpp -o grades
   ```
2. Execute the program:
   ```bash
   ./grades
   ```