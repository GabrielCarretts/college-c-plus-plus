# Water Bill Manager

## Description

A C++ console application that calculates a water bill based on progressive consumption brackets, sanitation fees, and taxes.

The program reads the client’s registration number, name, water consumption in cubic meters, and service class. It then calculates the water charge, sanitation fee, PIS, COFINS, and the final total bill.

---

## Features

* Reads client name using `getline()`
* Validates registration number input
* Validates water consumption to prevent negative values
* Supports 3 service classes:

  * Residential
  * Commercial
  * Industrial
* Applies progressive water pricing based on consumption brackets
* Adds sanitation fee according to class type
* Calculates PIS and COFINS taxes
* Displays a structured, color-coded water bill summary
* Supports repeated calculations with a `do-while` loop

---

## Concepts Practiced

* Input and output (`cin`, `cout`, `getline`)
* Conditional logic with `if`, `else if`, and `else`
* Input validation with `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* Progressive pricing logic
* Arithmetic operations and percentage calculations
* Output formatting with `<iomanip>` (`fixed`, `setprecision`)
* Structured program flow (input → process → output)
* Basic UI/UX improvements with ANSI terminal colors

---

## How It Works

The program calculates the bill in this order:

1. **Water charge** using progressive pricing:

   * Up to 10 m³ → `$2.99` per m³
   * 11 to 25 m³ → `$5.48` per m³
   * 26 to 50 m³ → `$7.69` per m³
   * Above 50 m³ → `$9.22` per m³

2. **Sanitation fee** by class:

   * Residential → `$5.00`
   * Commercial → `$10.00`
   * Industrial → `$15.00`

3. **Taxes**:

   * PIS → `0.65%`
   * COFINS → `3%`

### Final calculation

```text
subtotal = water_charge + sanitation_fee
pis_amount = subtotal * 0.0065
cofins_amount = subtotal * 0.03
total_bill = subtotal + pis_amount + cofins_amount
```

---

## How to Run

1. Compile the program:

   ```bash
   g++ water_bill_manager.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Registration number: 12345
* Client name: Maria
* Water consumption: 30 m³
* Class type: Commercial

**Output:**

* Water charge: `$150.05`
* Sanitation fee: `$10.00`
* PIS: `$1.04`
* COFINS: `$4.80`
* Total bill: `$165.89`

---

## Notes

* Registration number must be greater than zero
* Water consumption cannot be negative
* The water charge uses **progressive pricing**, not a single flat rate
* ANSI colors may not display correctly in all terminals

---

## Author

Gabriel Carretts
