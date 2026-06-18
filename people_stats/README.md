# People Stats Tracker

## Description
A C++ terminal app that tracks and analyzes stats for a group of 5 people. It uses parallel arrays to link names, ages, and genders together in memory. It features crash-proof input validation (so typing a letter won't break the matrix), and a clean `do-while` restart loop so you can run it multiple times without the math bleeding over.

## Concepts Applied
* **Parallel Arrays:** Keeping multiple data types synced up using the same loop index.
* **Math & Formatting:** Using accumulators and `<iomanip>` to get true decimal averages.
* **Baselines:** Tracking the highest and lowest numbers across a data set.
* **Crash-Proofing:** Using `cin.fail()` traps and `cin.ignore()` to keep the buffer clean.
* **Session Loops:** Sweeping old data out of variables when the user restarts the loop.
* **Terminal UI:** Custom ANSI color codes.

## How to Run
1. Compile the file in your terminal:
   ```bash
   g++ people_stats.cpp -o stats
   ```
2. Execute the program:
   ```bash
   ./stats
   ```