# Negative Number Filter

## Description
A C++ algorithm designed to sanitize data structures. The program dynamically builds an array of `N` integer elements based on user input, validates all entries to prevent character-based crashes, and transforms any negative numbers into `0` on the fly. Finally, it outputs the cleaned array using a custom ANSI color palette.

## Concepts Applied
* Dynamic array sizing (Delayed Declaration)
* Robust input validation (`cin.fail()` clearing and trap loops)
* Linear array traversal using `for` loops
* In-line data filtering and conditional logic

## How to Run
1. Compile the file in your terminal:
   ```bash
   g++ negative_number_filter.cpp -o filter
   ```
2. Execute the program:
   ```bash
   ./filter
   ```