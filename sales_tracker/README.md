# Sales Tracker

A C++ terminal application designed to track inventory data by reading the names, prices, and quantities of an undetermined number of products. Once the data entry is finished, it calculates the overall average price and identifies both the cheapest product and the best-selling product.

---

## What it does
* **Dual-Tracking Logic:** Uses simultaneous "King of the Hill" comparisons to track the lowest price and the highest quantity on the fly without relying on arrays.
* **Dynamic Averages:** Implements a background counter (`product_count`) that ticks up only when valid products are entered, ensuring the final average price calculation is perfectly accurate.
* **Master Safe Zone:** Includes a structural fail-safe (`if (product_count == 0)`) to prevent fatal divide-by-zero errors if the user terminates the program before entering any items.
* **Handles Bad Input:** Uses `cin.fail()` and buffer clearing to safely catch and erase invalid inputs (like typing letters for prices or negative numbers for quantities).
* **Keeps Going:** Wraps the entire application in a master reset loop, allowing the user to track multiple different product lists in a single session.

---

## Skills Applied
* `if` and `else if` cascades
* Nested `do-while` loops and string-based sentinel logic (`end`)
* Input validation and error handling (`cin.clear()`, `cin.ignore()`)
* Floating-point type casting and stream formatting (`<iomanip>`)
* Variable state management and dynamic counting

---

## Example Run

**What you type:**
```text
====> Welcome to the Sales Tracker! <====

Enter the name of the product (type 'end' to stop): Laptop
Enter the unit price of the product: 1200
Enter the quantity sold of the product: 5

Enter the name of the product (type 'end' to stop): Mouse
Enter the unit price of the product: -20
Invalid price! Must be a positive number! Try again: 25
Enter the quantity sold of the product: 150

Enter the name of the product (type 'end' to stop): end
```

**The Results:**
```text
Cheapest Product: Mouse - $25.00
Most Sold Product: Mouse - Quantity: 150
Average Price of Products: $612.50

Would you like to calculate more products? (Y/N) 
```

---

## How to Run It
1.  Compile the `.cpp` file in your terminal:
    ```bash
    g++ sales_tracker.cpp -o app
    ```
2.  Run it:
    ```bash
    ./app
    ```

---
**Author:** Gabriel Carretts