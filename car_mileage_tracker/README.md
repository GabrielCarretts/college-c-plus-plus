# Car Mileage Tracker

## Description

A C++ console application that calculates a vehicle’s fuel consumption based on a trip.

The program reads the car brand, initial mileage, final mileage, and fuel consumed, then calculates and displays the fuel efficiency in kilometers per liter (KM/L).

---

## Features

* Reads car brand using `getline()`
* Validates mileage and fuel input to prevent invalid values
* Calculates distance traveled from initial and final mileage
* Computes fuel consumption (KM/L)
* Displays a structured trip report
* Uses ANSI colors for improved terminal readability
* Formats output with 2 decimal places using `<iomanip>`
* Allows repeated calculations using a `do-while` loop

---

## Concepts Practiced

* Variables and data types (`string`, `float`, `char`)
* Input and output (`cin`, `cout`, `getline`)
* Arithmetic operations (subtraction and division)
* Input validation using `while` loops
* Boolean logic (`&&`, `||`, `<=`)
* `do-while` loops for repeated execution
* Handling input buffer with `cin.ignore()`
* Output formatting with `<iomanip>` (`fixed`, `setprecision`)
* Basic UI design with ANSI escape codes

---

## Technologies Used

* C++
* `<iostream>` for input/output
* `<iomanip>` for formatting numbers
* ANSI escape codes for terminal colors

---

## How to Run

1. Compile the program:

   ```bash
   g++ car_mileage_tracker.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Car brand: Toyota
* Initial mileage: 10000 KM
* Final mileage: 10500 KM
* Fuel consumed: 25 L

**Output:**

* Distance traveled: 500 KM
* Fuel consumption: 20.00 KM/L

---

## Notes

* Final mileage must be greater than initial mileage
* Fuel consumed must be greater than zero
* Negative values are not accepted
* ANSI colors may not display correctly on all terminals

---

## Author

Gabriel Carretts
