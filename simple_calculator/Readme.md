# C++ Calculator

A terminal-based C++ application designed to process basic arithmetic operations. This project serves as a practical application of foundational control flow, input handling, and terminal output formatting.

## Core Features
* **Mathematical Operations:** Handles addition, subtraction, multiplication, and division.
* **Continuous Execution:** Encapsulated within a do-while loop, allowing continuous calculations without requiring a program restart.
* **Dynamic Visual Feedback:** Utilizes ANSI escape codes to conditionally format the terminal output color based on the mathematical result (e.g., green for positive, red for negative).
* **Localized Interface:** Terminal prompts and user interactions are localized in Portuguese (PT-BR).

## Technical Architecture
* **Language:** C++
* **Logic Routing:** Engineered using if / else if conditional branching to map user input to the correct mathematical formula.
* **Data Types:** Implemented strict variable typing (float for calculations, char for menu routing).
* **Encoding:** Integrated the `<clocale>` library to enforce proper UTF-8 character rendering in the Windows terminal.

## Roadmap & Version Control Practice
This repository acts as a live sandbox for mastering Git version control (branching, commits, and merging). Upcoming feature branches include:
* Integrating `system("cls")` for terminal screen refreshing.
* Implementing strict error handling (e.g., division by zero prevention).
* Handling invalid operator inputs.

## How to Run
Code written and tested in the Dev-C++ environment. Simply download the `.cpp` file, compile it in your preferred IDE, and run it in the terminal.
