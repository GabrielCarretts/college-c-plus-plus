# Array Flipper

## Description
A C++ terminal application that takes a collection of 20 numbers and physically reverses their order in memory. Instead of just printing the array backwards, this script uses a two-pointer swapping engine and a temporary variable (the "empty cup" method) to actively overwrite and invert the data structure. It features a custom ANSI color interface, crash-proof input validation, and a seamless session restart loop.

## Concepts Applied
* **In-Place Array Reversal:** Swapping memory addresses without losing data or requiring a second array.
* **Opposite Index Math:** Using loop counters to dynamically target the opposite end of an array (`19 - i`).
* **Half-Loop Constraints:** Stopping a loop exactly at the midpoint (`i < 10`) to prevent the logic from crossing over and undoing its own swaps.
* **Crash-Proofing:** Using `cin.fail()` traps and `cin.ignore()` to protect the input stream from characters.
* **Session Loops:** Utilizing a `do-while` architecture to let the user run the program endlessly without restarting the terminal.

## How to Run
1. Compile the file in your terminal:
   ```bash
   g++ array_flipper.cpp -o flipper
   ```
2. Execute the program:
   ```bash
   ./flipper
   ```