# Month Lookup

A C++ terminal application that translates a numeric input (1-12) into its corresponding spelled-out month. The program utilizes a pre-filled array and zero-index mathematical adjustment to fetch the correct data instantly without the need for complex routing logic.

---

## What it does

* **Static Data Mapping:** Uses a pre-populated array of strings to hold the 12 months of the year, acting as a lightweight, read-only database.
* **Index Translation:** Applies `(input - 1)` logic to seamlessly bridge the gap between human counting (1-12) and computer memory indexing (0-11).
* **Strict Input Locking:** Implements two defensive loops to catch and reject both non-numeric inputs (like letters) and out-of-bounds numbers (less than 1 or greater than 12).
* **Continuous Sessions:** Wraps the core logic in a master `do-while` loop, allowing the user to search multiple months without restarting the terminal.

---

## Skills Applied

* Static array initialization and hardcoding (`{...}`)
* Zero-index array translation
* Defensive programming (`cin.fail()`, `cin.clear()`, `cin.ignore()`)
* Compound logical operators (`||`) for range validation
* Variable scope management across nested loops

---

## Example Run

**What you type:**

```text
====> Welcome to the Month Lookup <====

Enter the month number (1-12): cat
Invalid character! Must be a number (1-12)! Try again: 15
Invalid character! Must be a number (1-12)! Try again: 8
```

**The Results:**

```text
The month 8 is August

Would you like to try again? (Y/N) N
```

---

## How to Run It

1. Compile the `.cpp` file in your terminal:

    ```bash
    g++ month_lookup.cpp -o app
    ```

2. Run it:

    ```bash
    ./app
    ```

---
**Author:** Gabriel Carretts