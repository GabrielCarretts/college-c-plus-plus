# Hotel Sono Bom Manager

## Description

A C++ console application that simulates a hotel billing system for the fictional **Sono Bom Hotel**.

The program reads reservation details, guest information, room type, stay duration, and hotel service usage. It then calculates room charges, massage costs, minibar charges, bar charges, ISS tax, and the final bill, displaying a complete summary in a formatted terminal report.

---

## Features

* Reads reservation and guest information
* Validates numeric inputs to prevent invalid values
* Supports 3 room categories:

  * Standard
  * Luxury
  * VIP
* Applies daily guest surcharges based on guest category
* Calculates massage costs using tiered pricing
* Adds minibar maintenance fee automatically
* Calculates bar charges with a 10% service commission
* Applies ISS tax based on the number of days stayed
* Displays a structured, color-coded bill summary
* Supports repeated calculations with a `do-while` loop

---

## Concepts Practiced

* Input and output (`cin`, `cout`, `getline`)
* Conditional logic with `if`, `else if`, and `else`
* Input validation with `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* Arithmetic operations and percentage calculations
* Tiered pricing rules
* Output formatting with `<iomanip>` (`fixed`, `setprecision`)
* Structured program flow (input → process → output)
* Basic UI/UX improvements with ANSI terminal colors

---

## How It Works

The program calculates the final hotel bill using these components:

* **Room charges** = `(room daily rate + guest extra per day) * number of days`
* **Massage total** = `massage price * massage count`
* **Minibar total** = `minibar consumption + 12`
* **Bar total** = `bar consumption + 10%`
* **Subtotal** = `room charges + massage total + minibar total + bar total`
* **ISS** = percentage applied to the subtotal
* **Final bill** = `subtotal + ISS`

### ISS rules

* More than 10 days → **1%**
* More than 5 days → **3%**
* 5 days or fewer → **5%**

---

## How to Run

1. Compile the program:

   ```bash
   g++ hotel_sono_bom_manager.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Reservation number: 123
* Guest name: Maria
* Number of guests: 3
* Room type: Luxury
* Number of days: 7
* In-room minibar consumption: $50.00
* Number of massages: 2
* Bar consumption: $80.00

**Output:**

* Reservation number: 123
* Guest name: Maria
* Room type: Luxury
* Number of days: 7
* Guest category: Small Family
* Room charges: $700.00
* Massage total: $160.00
* In-room minibar total: $62.00
* Bar total: $88.00
* ISS charge: $30.30
* Final bill: $1040.30

---

## Notes

* Reservation number and guest count must be greater than zero
* Minibar and bar consumption cannot be negative
* Massage count cannot be negative
* This project was developed as part of an introductory programming exercise on `if` statements and structured problem-solving
* ANSI colors may not display correctly in all terminals

---

## Author

Gabriel Carretts
