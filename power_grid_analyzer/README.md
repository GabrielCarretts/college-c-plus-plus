# Power Grid Analyzer

A C++ terminal application that is an energy consumption simulator that calculates utility bills on the fly for three different consumer demographics (Residential, Commercial, and Industrial). Once the grid is closed, it outputs the total power consumption for each sector and identifies which demographic placed the highest load on the grid.

---

## What it does

* **Dynamic Receipt Generation:** Calculates and prints individual utility bills in real-time as each consumer is entered into the system.
* **Multi-Tier Routing:** Uses an `if / else if` cascade to route consumers to their specific price-per-kWh multiplier based on their category code.
* **Sector Load Tracking:** Maintains three independent running totals to accurately track the `kWh` load for each individual demographic.
* **Master Safe Zone:** Includes a structural fail-safe to prevent logical errors if the system is shut down before any power is consumed.
* **Handles Bad Input:** Uses `cin.fail()` and buffer clearing to completely immunize the system against crashes caused by invalid data entry (like typing letters instead of numbers).

---

## Skills Applied

* `if` and `else if` routing cascades
* Nested `do-while` loops and sentinel-controlled logic (`0` to stop)
* Advanced input validation (`cin.clear()`, `cin.ignore()`)
* Floating-point precision formatting for financial output (`<iomanip>`)
* "King of the Hill" logic applied to running totals

---

## Example Run

**What you type:**

```text
====> Welcome to the Power Grid Analyzer! <====

Enter the consumer number (0 to stop): 101
Enter the kWh consumed: 500
Enter the consumer type (1-Residential, 2-Commercial, 3-Industrial): 1

Enter the consumer number (0 to stop): 102
Enter the kWh consumed: 2000
Enter the consumer type (1-Residential, 2-Commercial, 3-Industrial): 3

Enter the consumer number (0 to stop): 0
```

**The Results:**

```text
Total cost for consumer 101: $150.00
Total cost for consumer 102: $1400.00

====> Grid Analytics <====

Total consumption for Residential: 500.00 kWh
Total consumption for Commercial: 0.00 kWh
Total consumption for Industrial: 2000.00 kWh

The category that consumes the most is: Industrial with 2000.00 kWh!

Do you want to analyze another grid? (Y/N): 
```

---

## How to Run It

1. Compile the `.cpp` file in your terminal:

    ```bash
    g++ power_grid_analyzer.cpp -o app
    ```

2. Run it:

    ```bash
    ./app
    ```

---
**Author:** Gabriel Carretts
