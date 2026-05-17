# Multiplication Table Generator

## Description
A C++ terminal application that generates and displays the complete multiplication tables from 1 to 10. The program uses nested loops to systematically compute results and includes user interaction for repeated execution.

---

## Features
* **Full Range Tables:** Automatically prints multiplication tables from 1 through 10.
* **Nested Loop Logic:** Uses a structured `for`-inside-`for` loop system for efficient computation.
* **User Replay System:** Wrapped in a `do-while` loop, allowing the user to rerun the program without restarting it.
* **Input Validation:** Ensures only valid responses (`Y` or `N`) are accepted when prompting for replay.
* **Colored Output:** Uses ANSI escape codes to improve readability and visual organization in the terminal.

---

## Concepts Practiced
* **Nested Loops:** Iterating through two dimensions (tables and multipliers).
* **Control Flow:** Managing execution with `do-while` loops and condition validation.
* **Input Validation:** Preventing invalid user input using logical conditions.
* **Console Formatting:** Enhancing output using color codes.

---

## Example

**Output:**
```text
Multiplication table of 1
1 x 1 = 1
1 x 2 = 2
...
1 x 10 = 10

Multiplication table of 2
2 x 1 = 2
...
```

---

## Notes
* The program uses ANSI color codes, which may not display correctly on all terminals (especially some Windows environments without proper support).
* The `system("pause")` command is platform-dependent and works primarily on Windows systems.

---

## How to Run

1. Compile the program:
   ```bash
   g++ multiplication_table.cpp -o app
   ```

2. Run the executable:
   ```bash
   ./app
   ```

---

**Author:** Gabriel Carretts