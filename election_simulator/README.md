# Election Simulator

A C++ terminal application that simulates an election process for three candidates, allowing an undetermined number of voters to cast their ballots. It also tracks null and blank votes, calculates percentage results, and determines the overall winner.

---

## What it does
* **Dynamic Voter Turnout:** Uses `0` as a sentinel value to close the polls, allowing the program to handle any number of voters dynamically.
* **Master Safe Zone:** Includes a structural fail-safe to prevent fatal divide-by-zero errors if the polls are closed before any votes are cast.
* **Handles Bad Input:** Uses `cin.fail()` and buffer clearing to safely catch and erase invalid inputs (like letters or out-of-bounds numbers) without crashing the program.
* **Precision Math:** Uses floating-point division to prevent integer truncation, ensuring the final percentage calculations are perfectly accurate.
* **Keeps Going:** Wraps the entire application in a master reset loop, allowing the user to run multiple different election simulations in a single session.

---

## Skills Applied
* `if` and `else if` cascades
* Nested `do-while` loops and sentinel-controlled logic
* Input validation and error handling (`cin.clear()`, `cin.ignore()`)
* Floating-point type casting for accurate division
* Custom ANSI terminal formatting

---

## Example Run

**What you type:**
```text
====> Welcome to the election simulator! <====

Enter your vote (1,2,3,4-null,5-blank and 0 to stop): 1
Enter your vote (1,2,3,4-null,5-blank and 0 to stop): 1
Enter your vote (1,2,3,4-null,5-blank and 0 to stop): 2
Enter your vote (1,2,3,4-null,5-blank and 0 to stop): 5
Enter your vote (1,2,3,4-null,5-blank and 0 to stop): 0
```

**The Results:**
```text
====> Final Results <====

Candidate 1: 2 votes (50.00%)
Candidate 2: 1 votes (25.00%)
Candidate 3: 0 votes (0.00%)
Null votes: 0 (0.00%)
Blank votes: 1 (25.00%)

Winner: Candidate 1!

Would you like to simulate another election? (Y/N) 
```

---

## How to Run It
1.  Compile the `.cpp` file in your terminal:
    ```bash
    g++ election_simulator.cpp -o app
    ```
2.  Run it:
    ```bash
    ./app
    ```

---
**Author:** Gabriel Carretts